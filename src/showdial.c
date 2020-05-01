/* *******************************************************//** @file showdial.c
@author  Richard Michael Thomas <rmthomas@sciolus.org>
@brief   ToDo.
@note    This file is a component of project covid-simpler.
*//***************************************************************************/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "dial.h"

extern struct dial dial[];

/* ************************************************************************//**
@brief ToDo.

@param   pdial    The dial.  May be NULL.
@param   pblurb   Phrase describing the dial. Used for lookup if pdial==NULL.
@return           Zero unless error.
*//* *************************************************************************/
int
 showdial(FILE *pFILE, struct dial *pdial, char *pblurb)
{
struct dial *pd;
int i, j, k, *pint;

pd = pdial;
if ( ! pd)
  {
  assert(pblurb);
  pd = dial;
  while (pd->blurb[0]) { if ( ! strcmp(pd->blurb, pblurb)) break; pd++; }
  if ( ! (pd->blurb[0]))
    {
    fprintf(stderr, "ERROR: unknown dial: \"%s\"\n", pblurb); return -1;
    }
  }
fprintf(pFILE, "%s:  ", pd->blurb);
if (NULL == pd->pvoid) { fprintf(pFILE, "NOT GLOBAL\n"); return 0; }
if ( 1 < ((pd->manycolumn) * (pd->manyrow)) )
  {
  k = 0;
  if  ( ! strcmp("double", pd->cast))
    {
    for (i = 0; i < pd->manyrow; i++)
      {
      for (j = 0; j < pd->manycolumn; j++)
        {
        double *p;
  
        p = (double *)(pd->pvoid) + (i * (pd->manycolumn)) + j;
        pint = (int *)(pd->pvoid) + (i * (pd->manycolumn)) + j;
        if ( ! (k % 4)) fprintf(pFILE, "\n    ");

        if ((0 < j) && ( ! *pint) && ( ! (*(pint + 1))))
          {
          fprintf(pFILE, "  ...\n"); return 0;
          }

        fprintf(pFILE, "  %16.6e", *p);  k++;
        }
      }
    fprintf(pFILE, "\n");
    }
  else if ( ! strcmp("int", pd->cast))
    {
    for (i = 0; i < pd->manyrow; i++)
      {
      for (j = 0; j < pd->manycolumn; j++)
        {
        pint = (int *)(pd->pvoid) + (i * (pd->manycolumn)) + j;
        if ( ! (k % 4)) fprintf(pFILE, "\n    ");

        if ((0 < j) && ( ! *pint) && ( ! (*(pint + 1))))
          {
          fprintf(pFILE, "  ...\n"); return 0;
          }

        fprintf(pFILE, "  %16i", *pint);  k++;
        }
      fprintf(pFILE, "\n");
      }
    }
  else
    {
    fprintf(stderr, "WORRY: unsupported cast for \"%s\"\n", pd->blurb);
    return -1;
    }
  }
else
  {
  if   ( ! strcmp("double", pd->cast))
    {
    double *p; p = (double *)(pd->pvoid); fprintf(pFILE, "%.6e\n", *p);
    }
  else if ( ! strcmp("int", pd->cast))
    {
    int *p; p = (int *)(pd->pvoid); fprintf(pFILE, "%i\n", *p);
    }
  else
    {
    fprintf(stderr, "WORRY: unsupported cast for \"%s\"\n", pd->blurb);
    return -1;
    }
  }
return 0;
}
/* ************************************************************************//**
@brief ToDo
@return           Zero unless error.
*//* *************************************************************************/
int
 showalldials(FILE *pFILE)
{
struct dial *pdial;
int rc;

pdial = &dial[0]; rc = 0;
while (pdial->blurb[0])
  {
  if (0 > (rc = showdial(pFILE, pdial, ""))) break;
  pdial++;
  }
return rc;
}
/* ***************************************************************************/
