/*************************************************************//** @file dial.h
@copyright
Copyright (C) Richard Michael Thomas <rmthomas@sciolus.org>
@brief    ToDo.
@note     This file is a component of covid-simpler.
*//* *************************************************************************/

#ifndef COV_SIMPLER_DIAL_H
#define COV_SIMPLER_DIAL_H

#define SIZEBLURB (128)

/*
 * Properties of a single dial (a.k.a. adjustable parameter)
 *
 *     manycolumn      manyrow        data dimension
 *         1              1               scalar
 *         >1             1               vector
 *         >1             >1              matrix
 *
 */
struct dial
  {
  void   *pvoid;             /*<< Pointer into struct param P                */
  char    blurb[SIZEBLURB];  /*<< String describing the parameter            */
  int     manyrow;           /*<< Count of data rows: 0 => scalar or vector  */
  int     manycolumn;        /*<< Count of data columns: 0 => scalar         */
  char    format[8];         /*<< String describing the printf format        */
  char    cast[128];         /*<< String describing the required cast        */
  };

#endif /*COV_SIMPLER_DIAL_H*/

