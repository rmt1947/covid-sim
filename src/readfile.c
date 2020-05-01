/* *******************************************************//** @file readfile.c
@author  Richard Michael Thomas <rmthomas@sciolus.org>
@brief   ToDo.
@note    This file is a component of project covid-simpler.
*//***************************************************************************/

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <errno.h>
#include <assert.h>
#include "dial.h"

#define SEP '\t'

#define SIZECHUNK (32)
#define MANYCHUNK (4096)
#define SIZELINE ((SIZECHUNK * MANYCHUNK) + (16 * 1024))
#define DIRBLK   "/tmp"

extern char *pAdminData, *pPreParamData, *pParamData;
extern struct dial dial[];

static int setparameter(char *const, char const [],void *);

/* ************************************************************************//**
@brief  Read a single file and extract the data as character strings.

@param   fpath   Path to file.  If 0==fpath[0] memory at ppblk will be freed.
@param   multi   0 => all data is on the line following the blurb;
                 1 => data ends only at a blank line, '[', '(' or end-of-file.
@param   ppblk   Location to receive the character data.  A line has format:
                         blurb@item1@item2@...itemn@|
                 where | denotes line feed.  There is a NULL at the very end.
@return          -1 => cannot open input file;
                 -2 => input buffer overflow;
                 -3 => malloc failed;
                 -4 => faulty input data cannot be parsed;
                 -5 => failed while reading;
                 otherwise 0.
*//* *************************************************************************/
int
readparamfile(char const fpth[], int const multi, char **ppblk)
{
FILE *pFILE;
char bf[SIZELINE], *p1, *p2;
size_t made, off;
int latch, katch;

if (( ! fpth[0]) && (NULL != *ppblk)) { free(*ppblk); *ppblk=NULL; return 0; }
if (NULL == (pFILE = fopen(fpth, "r"))) return -1;
made = 0; *ppblk = 0; p2 = *ppblk;
latch = 0; bf[SIZELINE - 4] = 0;
while (NULL != (p1 = fgets(bf, SIZELINE - 2, pFILE)))
  {
  if (bf[SIZELINE - 4]) return -2;
  while (*p1 && ('\r' != *p1) && ('\n' != *p1)) { p1++; }
  *p1++ = ' '; *p1 = 0; p1 = bf;
  if (made <= (4 + strlen(p1) + (off = (p2 - *ppblk))))
    {
    made += SIZELINE;
    if (NULL == (*ppblk = (char *)realloc((void *)(*ppblk), made))) return -3;
    p2 = *ppblk + off;
    }
/*-----------------------------------------------------------------------------
READING DATA
-----------------------------------------------------------------------------*/
  if (1 == latch)
    {
    katch = 0;
    while (1)
      {
      while (isspace((int)(*p1))) { p1++; }
      if ( ! *p1)
        {
        if (( ! multi) || ( ! katch)) { *p2++ = '\n'; *p2 = 0; latch = 0; }
        break;
        }
      if ( ('[' == *p1) || ('(' == *p1) || ( ! memcmp("===",p1,3)) )
        {
        *p2++ = '\n'; *p2 = 0; latch = 0; break;
        }
      while (*p1 && ( ! isspace((int)(*p1)))) { *p2++ = *p1; p1++; }
      *p2++ = SEP; *p2 = 0;
      katch++;
      }
    }
/*-----------------------------------------------------------------------------
AWAITING BLURB
-----------------------------------------------------------------------------*/
  if (0 == latch)
    {
    while (*p1 && ('[' != *p1)) { p1++; }
    if ( ! *p1) continue;
    p1++;
    while (*p1 && (']' != *p1)) { *p2++ = *p1;  p1++; }
    if ( ! *p1) { fprintf(stderr, "ERROR: missing ']'\n"); return -4; }
    *p2++ = SEP; *p2 = 0;
    katch = 0; latch = 1;
    }
  }
assert( ! *p2);
if (*ppblk < p2) { if ('\n' != *(p2 - 1)) { *p2++ = '\n'; *p2 = 0; } }
if ( ! feof(pFILE)) return -5;
fclose(pFILE); pFILE = (FILE *)NULL;

#ifndef NDEBUG
latch = 0;
for (int n = 0; 0 != fpth[n]; n++) { if ('/' == fpth[n]) latch = n + 1; }
strcpy(bf, DIRBLK); p2 = bf; while (*p2) { p2++; } *p2++ = '/'; *p2 = 0;
for (int n = latch; 0 != fpth[n]; n++)
  {
  if (&bf[SIZELINE - 5] > p2) *p2++ = fpth[n]; else return -6;
  }
*p2 = 0; strcat(bf, ".blk");
if (NULL == (pFILE = fopen(bf, "w"))) return -6;
fputs(*ppblk, pFILE);
fclose(pFILE);
#endif /*NDEBUG*/

return 0;
}
/* ************************************************************************//**
@brief Set a parameter, specifying the priority order on the two input files.
@param    mode      If mode[0] is '1', failure precipitates an error exit.
                    If mode[0] is '2', failure returns 0 as an error code.
                    Lookup order is defined by mode[1] and mode[2]:
                      "XY" => first try Y (sic) if it exists, then try X
                    where 'X' and 'Y' are each one of 
                      'A' => take from AdminFile_dat;
                      'P' => take from PreParameterFile_dat.
                      'Q' => take from ParameterFile_dat;
@param    blurb     String describing the parameter.
@return             1 => count of data items acquired, 0 => not found.
*//* *************************************************************************/
int
 GIP(char const mode[], char const blurb[])
{
char *p[2];
int kill, rc;

rc = 0;
if      ('1' == mode[0]) kill = 1;
else if ('2' == mode[0]) kill = 0;
else assert(0);
if      ('A' == mode[1]) p[1] = pAdminData;
else if ('P' == mode[1]) p[1] = pPreParamData;
else if ('Q' == mode[1]) p[1] = pParamData;
else assert(0);
if      ('A' == mode[2]) p[0] = pAdminData;
else if ('P' == mode[2]) p[0] = pPreParamData;
else if ('Q' == mode[2]) p[0] = pParamData;
else assert(0);
assert(p[1]);

/*-----------------------------------------------------------------------------
FIRST TRY
-----------------------------------------------------------------------------*/
if (p[0])
  {
  if (0 > (rc = setparameter(p[0], blurb, NULL)))
    {
    fprintf(stderr, "ERROR: %i<-setparameter(,\"%s\")\n",rc,blurb); exit(-1);
    }
  if (rc) return rc;
  }
/*-----------------------------------------------------------------------------
SECOND TRY
-----------------------------------------------------------------------------*/
if (0 > (rc = setparameter(p[1], blurb, NULL)))
  {
  fprintf(stderr, "ERROR: %i<-setparameter(,\"%s\")\n",rc,blurb); exit(-1);
  }
if (rc) return rc;
/*---------------------------------------------------------------------------*/
if (kill)
  {
  fprintf(stderr, "\nUnable to find parameter \"%s\" in file ", blurb);
  if      ('A' == mode[2]) fprintf(stderr, "AdunitFile\n");
  else if ('P' == mode[2]) fprintf(stderr, "PreParamFile\n");
  else if ('Q' == mode[2]) fprintf(stderr, "ParamFile\n");
  fprintf(stderr, "Aborting program\n"); exit(-1);
  }
return rc;
}
/* ************************************************************************//**
@brief Set a parameter, specifying the priority order on the two input files.
@param    mode      If mode[0] is '1', failure precipitates an error exit.
                    If mode[0] is '2', failure returns 0 as an error code.
                    Lookup order is defined by mode[1] and mode[2]:
                      "XY" => first try Y (sic) if it exists, then try X
                    where 'X' and 'Y' are each one of 
                      'A' => take from AdminFile_dat;
                      'P' => take from PreParameterFile_dat.
                      'Q' => take from ParameterFile_dat;
@param    blurb     String describing the parameter.
@param    ptarget   Location where the data is to be written.
@return             1 => count of data items acquired, 0 => not found.
*//* *************************************************************************/
int
 GIPLOCAL(char const mode[], char const blurb[], void *ptarget)
{
char *p[2];
int kill, rc;

rc = 0;
assert(ptarget);
if      ('1' == mode[0]) kill = 1;
else if ('2' == mode[0]) kill = 0;
else assert(0);
if      ('A' == mode[1]) p[1] = pAdminData;
else if ('P' == mode[1]) p[1] = pPreParamData;
else if ('Q' == mode[1]) p[1] = pParamData;
else assert(0);
if      ('A' == mode[2]) p[0] = pAdminData;
else if ('P' == mode[2]) p[0] = pPreParamData;
else if ('Q' == mode[2]) p[0] = pParamData;
else assert(0);
assert(p[1]);

/*-----------------------------------------------------------------------------
FIRST TRY
-----------------------------------------------------------------------------*/
if (p[0])
  {
  if (0 > (rc = setparameter(p[0], blurb, ptarget)))
    {
    fprintf(stderr, "ERROR: %i<-setparameter(,\"%s\")\n",rc,blurb); exit(-1);
    }
  if (rc) return rc;
  }
/*-----------------------------------------------------------------------------
SECOND TRY
-----------------------------------------------------------------------------*/
if (0 > (rc = setparameter(p[1], blurb, ptarget)))
  {
  fprintf(stderr, "ERROR: %i<-setparameter(,\"%s\")\n",rc,blurb); exit(-1);
  }
if (rc) return rc;
/*---------------------------------------------------------------------------*/
if (kill)
  {
  fprintf(stderr, "\nUnable to find parameter \"%s\" in file ", blurb);
  if      ('A' == mode[2]) fprintf(stderr, "AdunitFile\n");
  else if ('P' == mode[2]) fprintf(stderr, "PreParamFile\n");
  else if ('Q' == mode[2]) fprintf(stderr, "ParamFile\n");
  fprintf(stderr, "Aborting program\n"); exit(-1);
  }
return rc;
}
/* ************************************************************************//**
@brief Write formatted data to a target location using data from a specific
       block of memory.

@note  This function assumes that multidimensional data appear in the
       parameter files in the same order as C arrays: the rightmost subscript
       moves fastest.

@param    pdata    Supplied block of parameter data in memory.
@param    blurb    String describing the parameter.
@param    ptarget  Location to receive the data. If NULL, inferred from dial.c.
@return            Count of data items acquired, or:
                     0 => blurb not found in data;
                    -1 => blurb not found in dial[];
                    -2 => empty values;
                    -3 => data string too long;
                    -4 => conversion error;
                    -5 => unknown data format;
                    -6 => too many data items.
*//* *************************************************************************/
int
 setparameter(char *const pdata, char const blurb[], void *ptarget)
{
struct dial *pd;
size_t sz;
char *pstart, *pend, *p1, *p2, bf[SIZECHUNK];
int n;

n = 0;
/*-----------------------------------------------------------------------------
GET A POINTER INTO struct dial dial[]
-----------------------------------------------------------------------------*/
pd = dial;
while (pd->blurb[0]) { if ( ! strcmp(blurb, pd->blurb)) break; pd++; }
if ( ! pd->blurb[0]) return -1;
sz = strlen(blurb);
if (NULL == ptarget) ptarget = pd->pvoid;
assert(ptarget);

/*-----------------------------------------------------------------------------
PERFORM LOOKUP IN THE MEMORY BLOCK
-----------------------------------------------------------------------------*/
assert(pdata);
pstart = pdata;
while (*pstart)
  {
  pend = pstart;
  while (*pend && ('\n' != *pend)) { pend++; }
  p2 = pstart;
  while ((p2 < pend) && (SEP != *p2)) { p2++; }
  if ((p2 - pstart) == sz) { if ( ! memcmp(blurb, pstart, sz)) break; }
  pstart = pend; if (*pstart) pstart++;
  }
if ( ! *pstart) return 0;
while (*pstart && (SEP != *pstart)) { pstart++; }
if ( ! *pstart) return -2;
assert( SEP == *pstart);
pstart++;
assert('\n' == *pend);

n = 0;
p1 = pstart;
while (pend > p1)
  {
  assert('\n' != *p1);
  p2 = bf; assert(SEP != *p1);
  while (*p1 && (SEP != *p1) && (&bf[SIZECHUNK - 1] > p2))
    {
    *p2++ = *p1; p1++;
    }
  if (&bf[SIZECHUNK - 1] <= p2) return -3;
  *p2 = 0;
/* -----------------------------------------------------------------------*//**
CONVERT long double ITEM
*//*-------------------------------------------------------------------------*/
  if ( ! strcmp("%Lf", pd->format))
    {
    long double result;
    errno = 0; result = strtold(bf, NULL); if (errno) return -4;
    *( ((long double *)ptarget) + n ) = result;
    }
/* -----------------------------------------------------------------------*//**
CONVERT double ITEM
*//*-------------------------------------------------------------------------*/
  else if (( ! strcmp("%f", pd->format)) || ( ! strcmp("%lf", pd->format)))
    {
    double result;
    errno = 0; result = strtod(bf, NULL); if (errno) return -4;
    *( ((double *)ptarget) + n ) = result;
    }
/* -----------------------------------------------------------------------*//**
CONVERT long int ITEM
*//*-------------------------------------------------------------------------*/
  else if ( ! strcmp("%li", pd->format)) 
    {
    long int result;
    errno = 0; result = strtol(bf, NULL, 10); if (errno) return -4;
    *( ((long int *)ptarget) + n ) = result;
    }
/* -----------------------------------------------------------------------*//**
CONVERT int OR short ITEM
*//*-------------------------------------------------------------------------*/
  else if ( ! strcmp("%i", pd->format)) 
    {
    int result;
    errno = 0; result = (int)strtol(bf, NULL, 10); if (errno) return -4;
    *( ((int *)ptarget) + n ) = result;
    }
/* -----------------------------------------------------------------------*//**
CONVERT char ITEM.
WARNING: ptarget  MUST BE CAST TO EITHER (char *) OR (char **).
         TO DECIDE WHICH, IT IS NECESSARY TO REFER TO  dial[].cast.
*//*-------------------------------------------------------------------------*/
  else if ( ! strcmp("%s", pd->format)) 
    {
    if ( ! strcmp("char *", pd->cast))
      {
      strcpy( *( ((char **)ptarget) + n ), bf);
      }
    else
      {
      assert( ! n);
      strcpy((char *)ptarget, bf);
      }
    }
  else
    {
    fprintf(stderr, "ERROR: unrecognized data format: %s\n", pd->format);
    return -5;
    }
/*---------------------------------------------------------------------------*/
  n++;
  assert(SEP == *p1);
  p1++;
  }

#ifdef VERBAL
if (n != ((pd->manyrow) * (pd->manycolumn)))
  {
  if (1 < pd->manyrow) fprintf(stderr, "WORRY: %s\n       expected [%i][%i], "\
                   "got %i elements\n", blurb, pd->manyrow, pd->manycolumn, n);
  else fprintf(stderr, "WORRY: %s\n       expected [%i], " \
                   "got %i elements\n", blurb, pd->manycolumn, n);
  }
#endif /*VERBAL*/
if (n > ((pd->manyrow) * (pd->manycolumn)))
  {
  if (1 < pd->manyrow) fprintf(stdout, "ERROR: %s\n       expected [%i][%i], "\
                   "got %i elements\n", blurb, pd->manyrow, pd->manycolumn, n);
  else fprintf(stdout, "ERROR: %s\n       expected [%i], " \
                   "got %i elements\n", blurb, pd->manycolumn, n);
  return -6;
  }
return n;
}
/* ***************************************************************************/
