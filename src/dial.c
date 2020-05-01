/*************************************************************//** @file dial.c
@author  Richard Michael Thomas <rmthomas@sciolus.org>
@note    This file has been written by script mkfork.sh
@warning Edits made prior to runs of mkfork.sh will be lost.
@note    This file is a component of project covid-simpler.
*//* *************************************************************************/

#include <stddef.h>
#include <string.h>
#include "Param.h"
#include "dial.h"


/* ************************************************************************//**
@brief ToDo.
*//* *************************************************************************/
struct dial dial[464] =
{
//===== look: >TimeStep
//==0== str:  ><
 { .blurb="Update timestep",
   .pvoid=&P.TimeStep,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SampleStep
//==0== str:  ><
 { .blurb="Sampling timestep",
   .pvoid=&P.SampleStep,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SampleTime
//==0== str:  ><
 { .blurb="Sampling time",
   .pvoid=&P.SampleTime,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >N
//==0== str:  ><
 { .blurb="Population size",
   .pvoid=&P.N,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >NR
//==0== str:  ><
 { .blurb="Number of realisations",
   .pvoid=&P.NR,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >NRN
//==0== str:  ><
 { .blurb="Number of non-extinct realisations",
   .pvoid=&P.NRN,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >SmallEpidemicCases
//==0== str:  ><
 { .blurb="Maximum number of cases defining small outbreak",
   .pvoid=&P.SmallEpidemicCases,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >NMCL
//==0== str:  ><
 { .blurb="Number of micro-cells per spatial cell width",
   .pvoid=&P.NMCL,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >ResetSeeds
//==0== str:  ><
 { .blurb="Reset seeds for every run",
   .pvoid=&P.ResetSeeds,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >KeepSameSeeds
//==0== str:  ><
 { .blurb="Keep same seeds for every run",
   .pvoid=&P.KeepSameSeeds,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >ResetSeedsPostIntervention
//==0== str:  ><
 { .blurb="Reset seeds after intervention",
   .pvoid=&P.ResetSeedsPostIntervention,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >TimeToResetSeeds
//==0== str:  ><
 { .blurb="Time to reset seeds after intervention",
   .pvoid=&P.TimeToResetSeeds,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoHouseholds
//==0== str:  ><
 { .blurb="Include households",
   .pvoid=&P.DoHouseholds,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputAge
//==0== str:  ><
 { .blurb="OutputAge",
   .pvoid=&P.OutputAge,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputSeverityAdminUnit
//==0== str:  ><
 { .blurb="OutputSeverityAdminUnit",
   .pvoid=&P.OutputSeverityAdminUnit,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputR0
//==0== str:  ><
 { .blurb="OutputR0",
   .pvoid=&P.OutputR0,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputControls
//==0== str:  ><
 { .blurb="OutputControls",
   .pvoid=&P.OutputControls,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputCountry
//==0== str:  ><
 { .blurb="OutputCountry",
   .pvoid=&P.OutputCountry,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputAdUnitVar
//==0== str:  ><
 { .blurb="OutputAdUnitVar",
   .pvoid=&P.OutputAdUnitVar,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputHousehold
//==0== str:  ><
 { .blurb="OutputHousehold",
   .pvoid=&P.OutputHousehold,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputInfType
//==0== str:  ><
 { .blurb="OutputInfType",
   .pvoid=&P.OutputInfType,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputNonSeverity
//==0== str:  ><
 { .blurb="OutputNonSeverity",
   .pvoid=&P.OutputNonSeverity,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputNonSummaryResults
//==0== str:  ><
 { .blurb="OutputNonSummaryResults",
   .pvoid=&P.OutputNonSummaryResults,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >NKR
//==0== str:  ><
 { .blurb="Kernel resolution",
   .pvoid=&P.NKR,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >NK_HR
//==0== str:  ><
 { .blurb="Kernel higher resolution factor",
   .pvoid=&P.NK_HR,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >HouseholdSizeDistrib
//==0== str:  >[MAX_ADUNITS][MAX_HOUSEHOLD_SIZE]<
//==2== manyrow:     >MAX_ADUNITS<
//==2== manycolumn:  >MAX_HOUSEHOLD_SIZE<
 { .blurb="Household size distribution",
   .pvoid=&P.HouseholdSizeDistrib[0],
   .manyrow=MAX_ADUNITS,
   .manycolumn=MAX_HOUSEHOLD_SIZE,
   .format="%lf",
   .cast="double" },
//===== look: >HouseholdTrans
//==0== str:  ><
 { .blurb="Household attack rate",
   .pvoid=&P.HouseholdTrans,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HouseholdTransPow
//==0== str:  ><
 { .blurb="Household transmission denominator power",
   .pvoid=&P.HouseholdTransPow,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoCorrectAgeDist
//==0== str:  ><
 { .blurb="Correct age distribution after household allocation to exactly match specified demography",
   .pvoid=&P.DoCorrectAgeDist,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoAdUnits
//==0== str:  ><
 { .blurb="Include administrative units within countries",
   .pvoid=&P.DoAdUnits,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >CountryDivisor
//==0== str:  ><
 { .blurb="Divisor for countries",
   .pvoid=&P.CountryDivisor,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AdunitLevel1Divisor
//==0== str:  ><
 { .blurb="Divisor for level 1 administrative units",
   .pvoid=&P.AdunitLevel1Divisor,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AdunitLevel1Mask
//==0== str:  ><
 { .blurb="Mask for level 1 administrative units",
   .pvoid=&P.AdunitLevel1Mask,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AdunitNames
//==0== str:  ><
 { .blurb="Codes and country/province names for admin units",
   .pvoid=NULL,
   .manyrow=ADUNIT_LOOKUP_SIZE,
   .manycolumn=3,
   .format="%s",
   .cast="char *" },
//===== look: >nc
//==0== str:  ><
 { .blurb="Number of countries to include",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >pchoice
//==0== str:  ><
 { .blurb="List of names of countries to include",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=1,
   .format="%s",
   .cast="" },
//===== look: >NumAdunits
//==0== str:  ><
 { .blurb="Number of level 1 administrative units to include",
   .pvoid=&P.NumAdunits,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >pchoice
//==0== str:  ><
 { .blurb="List of level 1 administrative units to include",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=1,
   .format="%s",
   .cast="" },
//===== look: >DoAdunitOutput
//==0== str:  ><
 { .blurb="Output incidence by administrative unit",
   .pvoid=&P.DoAdunitOutput,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoAdunitBoundaryOutput
//==0== str:  ><
 { .blurb="Draw administrative unit boundaries on maps",
   .pvoid=&P.DoAdunitBoundaryOutput,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoCorrectAdunitPop
//==0== str:  ><
 { .blurb="Correct administrative unit populations",
   .pvoid=&P.DoCorrectAdunitPop,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoSpecifyPop
//==0== str:  ><
 { .blurb="Fix population size at specified value",
   .pvoid=&P.DoSpecifyPop,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AdunitBitmapDivisor
//==0== str:  ><
 { .blurb="Divisor for administrative unit codes for boundary plotting on bitmaps",
   .pvoid=&P.AdunitBitmapDivisor,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoOutputPlaceDistForOneAdunit
//==0== str:  ><
 { .blurb="Only output household to place distance distribution for one administrative unit",
   .pvoid=&P.DoOutputPlaceDistForOneAdunit,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputPlaceDistAdunit
//==0== str:  ><
 { .blurb="Administrative unit for which household to place distance distribution to be output",
   .pvoid=&P.OutputPlaceDistAdunit,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoAge
//==0== str:  ><
 { .blurb="Include age",
   .pvoid=&P.DoAge,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoPartialImmunity
//==0== str:  ><
 { .blurb="Initial immunity acts as partial immunity",
   .pvoid=&P.DoPartialImmunity,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoWholeHouseholdImmunity
//==0== str:  ><
 { .blurb="Initial immunity applied to all household members",
   .pvoid=&P.DoWholeHouseholdImmunity,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >InitialImmunity
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Initial immunity profile by age",
   .pvoid=&P.InitialImmunity,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >RelativeSpatialContact
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Relative spatial contact rates by age",
   .pvoid=&P.RelativeSpatialContact,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >AgeInfectiousness
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Age-dependent infectiousness",
   .pvoid=&P.AgeInfectiousness,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >AgeSusceptibility
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Age-dependent susceptibility",
   .pvoid=&P.AgeSusceptibility,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >PropAgeGroup
//==0== str:  >[MAX_ADUNITS][NUM_AGE_GROUPS]<
//==2== manyrow:     >MAX_ADUNITS<
//==2== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Age distribution of population",
   .pvoid=&P.PropAgeGroup[0],
   .manyrow=MAX_ADUNITS,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >RelativeTravelRate
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Relative travel rates by age",
   .pvoid=&P.RelativeTravelRate,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >WAIFW_Matrix
//==0== str:  >[NUM_AGE_GROUPS][NUM_AGE_GROUPS]<
//==2== manyrow:     >NUM_AGE_GROUPS<
//==2== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="WAIFW matrix",
   .pvoid=&P.WAIFW_Matrix,
   .manyrow=NUM_AGE_GROUPS,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >DoSpatial
//==0== str:  ><
 { .blurb="Include spatial transmission",
   .pvoid=&P.DoSpatial,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MoveKernelType
//==0== str:  ><
 { .blurb="Kernel type",
   .pvoid=&P.MoveKernelType,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MoveKernelScale
//==0== str:  ><
 { .blurb="Kernel scale",
   .pvoid=&P.MoveKernelScale,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >MoveKernelP3
//==0== str:  ><
 { .blurb="Kernel 3rd param",
   .pvoid=&P.MoveKernelP3,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >MoveKernelP4
//==0== str:  ><
 { .blurb="Kernel 4th param",
   .pvoid=&P.MoveKernelP4,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >MoveKernelShape
//==0== str:  ><
 { .blurb="Kernel Shape",
   .pvoid=&P.MoveKernelShape,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >AirportKernelType
//==0== str:  ><
 { .blurb="Airport Kernel Type",
   .pvoid=&P.AirportKernelType,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AirportKernelScale
//==0== str:  ><
 { .blurb="Airport Kernel Scale",
   .pvoid=&P.AirportKernelScale,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >AirportKernelShape
//==0== str:  ><
 { .blurb="Airport Kernel Shape",
   .pvoid=&P.AirportKernelShape,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >AirportKernelP3
//==0== str:  ><
 { .blurb="Airport Kernel 3rd param",
   .pvoid=&P.AirportKernelP3,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >AirportKernelP4
//==0== str:  ><
 { .blurb="Airport Kernel 4th param",
   .pvoid=&P.AirportKernelP4,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoPlaces
//==0== str:  ><
 { .blurb="Include places",
   .pvoid=&P.DoPlaces,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceTypeNum
//==0== str:  ><
 { .blurb="Number of types of places",
   .pvoid=&P.PlaceTypeNum,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceTypeAgeMin
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Minimum age for age group 1 in place types",
   .pvoid=&P.PlaceTypeAgeMin,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >PlaceTypeAgeMax
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Maximum age for age group 1 in place types",
   .pvoid=&P.PlaceTypeAgeMax,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >PlaceTypePropAgeGroup
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of age group 1 in place types",
   .pvoid=&P.PlaceTypePropAgeGroup,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypePropAgeGroup2
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of age group 2 in place types",
   .pvoid=&P.PlaceTypePropAgeGroup2,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeAgeMin2
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Minimum age for age group 2 in place types",
   .pvoid=&P.PlaceTypeAgeMin2,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >PlaceTypeAgeMax2
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Maximum age for age group 2 in place types",
   .pvoid=&P.PlaceTypeAgeMax2,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >PlaceTypePropAgeGroup3
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of age group 3 in place types",
   .pvoid=&P.PlaceTypePropAgeGroup3,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeAgeMin3
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Minimum age for age group 3 in place types",
   .pvoid=&P.PlaceTypeAgeMin3,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >PlaceTypeAgeMax3
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Maximum age for age group 3 in place types",
   .pvoid=&P.PlaceTypeAgeMax3,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >PlaceTypeKernelShape
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Kernel shape params for place types",
   .pvoid=&P.PlaceTypeKernelShape,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeKernelScale
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Kernel scale params for place types",
   .pvoid=&P.PlaceTypeKernelScale,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeKernelP3
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Kernel 3rd param for place types",
   .pvoid=&P.PlaceTypeKernelP3,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeKernelP4
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Kernel 4th param for place types",
   .pvoid=&P.PlaceTypeKernelP4,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeNearestNeighb
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Number of closest places people pick from (0=all) for place types",
   .pvoid=&P.PlaceTypeNearestNeighb,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >InhibitInterAdunitPlaceAssignment
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Degree to which crossing administrative unit boundaries to go to places is inhibited",
   .pvoid=&P.InhibitInterAdunitPlaceAssignment,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >DoAirports
//==0== str:  ><
 { .blurb="Include air travel",
   .pvoid=&P.DoAirports,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceTypeNoAirNum
//==0== str:  ><
 { .blurb="Number of non-airport places",
   .pvoid=&P.PlaceTypeNoAirNum,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >HotelPlaceType
//==0== str:  ><
 { .blurb="Hotel place type",
   .pvoid=&P.HotelPlaceType,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AirportTrafficScale
//==0== str:  ><
 { .blurb="Scaling factor for input file to convert to daily traffic",
   .pvoid=&P.AirportTrafficScale,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HotelPropLocal
//==0== str:  ><
 { .blurb="Proportion of hotel attendees who are local",
   .pvoid=&P.HotelPropLocal,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >JourneyDurationDistrib
//==0== str:  >[MAX_TRAVEL_TIME]<
//==1== manycolumn:  >MAX_TRAVEL_TIME<
 { .blurb="Distribution of duration of air journeys",
   .pvoid=&P.JourneyDurationDistrib,
   .manyrow=1,
   .manycolumn=MAX_TRAVEL_TIME,
   .format="%lf",
   .cast="double" },
//===== look: >LocalJourneyDurationDistrib
//==0== str:  >[MAX_TRAVEL_TIME]<
//==1== manycolumn:  >MAX_TRAVEL_TIME<
 { .blurb="Distribution of duration of local journeys",
   .pvoid=&P.LocalJourneyDurationDistrib,
   .manyrow=1,
   .manycolumn=MAX_TRAVEL_TIME,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeMeanSize
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Mean size of place types",
   .pvoid=&P.PlaceTypeMeanSize,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeGroupSizeParam1
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Param 1 of place group size distribution",
   .pvoid=&P.PlaceTypeGroupSizeParam1,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeSizePower
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Power of place size distribution",
   .pvoid=&P.PlaceTypeSizePower,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeSizeSD
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Standard deviation of place size distribution",
   .pvoid=&P.PlaceTypeSizeSD,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeSizeOffset
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Offset of place size distribution",
   .pvoid=&P.PlaceTypeSizeOffset,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeSizeMax
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Maximum of place size distribution",
   .pvoid=&P.PlaceTypeSizeMax,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeKernelType
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Kernel type for place types",
   .pvoid=&P.PlaceTypeKernelType,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >PlaceExclusivityMatrix
//==0== str:  >[NUM_PLACE_TYPES*NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES*NUM_PLACE_TYPES<
 { .blurb="Place overlap matrix",
   .pvoid=&P.PlaceExclusivityMatrix,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES*NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypePropBetweenGroupLinks
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of between group place links",
   .pvoid=&P.PlaceTypePropBetweenGroupLinks,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceTypeTrans
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Relative transmission rates for place types",
   .pvoid=&P.PlaceTypeTrans,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >Seasonality
//==0== str:  >[DAYS_PER_YEAR]<
//==1== manycolumn:  >DAYS_PER_YEAR<
 { .blurb="Daily seasonality coefficients",
   .pvoid=&P.Seasonality,
   .manyrow=1,
   .manycolumn=DAYS_PER_YEAR,
   .format="%lf",
   .cast="double" },
//===== look: >NumSeedLocations
//==0== str:  ><
 { .blurb="Number of seed locations",
   .pvoid=&P.NumSeedLocations,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >NumInitialInfections
//==0== str:  >[MAX_NUM_SEED_LOCATIONS]<
//==1== manycolumn:  >MAX_NUM_SEED_LOCATIONS<
 { .blurb="Initial number of infecteds",
   .pvoid=&P.NumInitialInfections,
   .manyrow=1,
   .manycolumn=MAX_NUM_SEED_LOCATIONS,
   .format="%i",
   .cast="int" },
//===== look: >LocationInitialInfection
//==0== str:  >[MAX_NUM_SEED_LOCATIONS][2]<
//==2== manyrow:     >MAX_NUM_SEED_LOCATIONS<
//==2== manycolumn:  >2<
 { .blurb="Location of initial infecteds",
   .pvoid=&P.LocationInitialInfection[0][0],
   .manyrow=MAX_NUM_SEED_LOCATIONS,
   .manycolumn=2,
   .format="%lf",
   .cast="double" },
//===== look: >MinPopDensForInitialInfection
//==0== str:  ><
 { .blurb="Minimum population in microcell of initial infection",
   .pvoid=&P.MinPopDensForInitialInfection,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MaxPopDensForInitialInfection
//==0== str:  ><
 { .blurb="Maximum population in microcell of initial infection",
   .pvoid=&P.MaxPopDensForInitialInfection,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoRandomInitialInfectionLoc
//==0== str:  ><
 { .blurb="Randomise initial infection location",
   .pvoid=&P.DoRandomInitialInfectionLoc,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoAllInitialInfectioninSameLoc
//==0== str:  ><
 { .blurb="All initial infections located in same microcell",
   .pvoid=&P.DoAllInitialInfectioninSameLoc,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >pchoice
//==0== str:  ><
 { .blurb="Administrative unit to seed initial infection into",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=1,
   .format="%s",
   .cast="" },
//===== look: >InitialInfectionsAdminUnitWeight
//==0== str:  >[MAX_NUM_SEED_LOCATIONS]<
//==1== manycolumn:  >MAX_NUM_SEED_LOCATIONS<
 { .blurb="Administrative unit seeding weights",
   .pvoid=&P.InitialInfectionsAdminUnitWeight[0],
   .manyrow=1,
   .manycolumn=MAX_NUM_SEED_LOCATIONS,
   .format="%lf",
   .cast="double" },
//===== look: >InfectionImportRate1
//==0== str:  ><
 { .blurb="Initial rate of importation of infections",
   .pvoid=&P.InfectionImportRate1,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >InfectionImportRate2
//==0== str:  ><
 { .blurb="Changed rate of importation of infections",
   .pvoid=&P.InfectionImportRate2,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >InfectionImportChangeTime
//==0== str:  ><
 { .blurb="Time when infection rate changes",
   .pvoid=&P.InfectionImportChangeTime,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoImportsViaAirports
//==0== str:  ><
 { .blurb="Imports via air travel",
   .pvoid=&P.DoImportsViaAirports,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DurImportTimeProfile
//==0== str:  ><
 { .blurb="Length of importation time profile provided",
   .pvoid=&P.DurImportTimeProfile,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >ImportInfectionTimeProfile
//==0== str:  >[MAX_DUR_IMPORT_PROFILE]<
//==1== manycolumn:  >MAX_DUR_IMPORT_PROFILE<
 { .blurb="Daily importation time profile",
   .pvoid=&P.ImportInfectionTimeProfile,
   .manyrow=1,
   .manycolumn=MAX_DUR_IMPORT_PROFILE,
   .format="%lf",
   .cast="double" },
//===== look: >R0
//==0== str:  ><
 { .blurb="Reproduction number",
   .pvoid=&P.R0,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >InfectiousPeriod
//==0== str:  ><
 { .blurb="Infectious period",
   .pvoid=&P.InfectiousPeriod,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >InfectiousnessSD
//==0== str:  ><
 { .blurb="SD of individual variation in infectiousness",
   .pvoid=&P.InfectiousnessSD,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >s
//==0== str:  ><
 { .blurb="k of individual variation in infectiousness",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoInfectiousnessProfile
//==0== str:  ><
 { .blurb="Model time varying infectiousness",
   .pvoid=&P.DoInfectiousnessProfile,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >R0DensityScalePower
//==0== str:  ><
 { .blurb="Power of scaling of spatial R0 with density",
   .pvoid=&P.R0DensityScalePower,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >infectious_prof
//==0== str:  >[INFPROF_RES+1]<
//==1== manycolumn:  >INFPROF_RES+1<
 { .blurb="Infectiousness profile",
   .pvoid=&P.infectious_prof,
   .manyrow=1,
   .manycolumn=INFPROF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >infectious_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="Infectious period inverse CDF",
   .pvoid=&P.infectious_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >DoLatent
//==0== str:  ><
 { .blurb="Include latent period",
   .pvoid=&P.DoLatent,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >LatentPeriod
//==0== str:  ><
 { .blurb="Latent period",
   .pvoid=&P.LatentPeriod,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >latent_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="Latent period inverse CDF",
   .pvoid=&P.latent_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >DoSymptoms
//==0== str:  ><
 { .blurb="Include symptoms",
   .pvoid=&P.DoSymptoms,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >ProportionSymptomatic
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Proportion symptomatic by age group",
   .pvoid=&P.ProportionSymptomatic,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >ProportionSymptomatic
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Proportion symptomatic",
   .pvoid=&P.ProportionSymptomatic,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >LatentToSymptDelay
//==0== str:  ><
 { .blurb="Delay from end of latent period to start of symptoms",
   .pvoid=&P.LatentToSymptDelay,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SymptSpatialContactRate
//==0== str:  ><
 { .blurb="Relative rate of random contacts if symptomatic",
   .pvoid=&P.SymptSpatialContactRate,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SymptInfectiousness
//==0== str:  ><
 { .blurb="Symptomatic infectiousness relative to asymptomatic",
   .pvoid=&P.SymptInfectiousness,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoRealSymptWithdrawal
//==0== str:  ><
 { .blurb="Model symptomatic withdrawal to home as true absenteeism",
   .pvoid=&P.DoRealSymptWithdrawal,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >SymptPlaceTypeContactRate
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Relative level of place attendance if symptomatic",
   .pvoid=&P.SymptPlaceTypeContactRate,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >CaseAbsentChildAgeCutoff
//==0== str:  ><
 { .blurb="Maximum age of child at home for whom one adult also stays at home",
   .pvoid=&P.CaseAbsentChildAgeCutoff,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >CaseAbsentChildPropAdultCarers
//==0== str:  ><
 { .blurb="Proportion of children at home for whom one adult also stays at home",
   .pvoid=&P.CaseAbsentChildPropAdultCarers,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseRoundHousehold
//==0== str:  ><
 { .blurb="Place close round household",
   .pvoid=&P.PlaceCloseRoundHousehold,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AbsenteeismPlaceClosure
//==0== str:  ><
 { .blurb="Absenteeism place closure",
   .pvoid=&P.AbsenteeismPlaceClosure,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MaxAbsentTime
//==0== str:  ><
 { .blurb="Max absent time",
   .pvoid=&P.MaxAbsentTime,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >CaseAbsenteeismDelay
//==0== str:  ><
 { .blurb="Delay in starting place absenteeism for cases who withdraw",
   .pvoid=&P.CaseAbsenteeismDelay,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >CaseAbsenteeismDuration
//==0== str:  ><
 { .blurb="Duration of place absenteeism for cases who withdraw",
   .pvoid=&P.CaseAbsenteeismDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >FalsePositiveRate
//==0== str:  ><
 { .blurb="False positive rate",
   .pvoid=&P.FalsePositiveRate,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >FalsePositivePerCapitaIncidence
//==0== str:  ><
 { .blurb="False positive per capita incidence",
   .pvoid=&P.FalsePositivePerCapitaIncidence,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >FalsePositiveAgeRate
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="False positive relative incidence by age",
   .pvoid=&P.FalsePositiveAgeRate,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >DoSeverity
//==0== str:  ><
 { .blurb="Do Severity Analysis",
   .pvoid=&P.DoSeverity,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >Mean_MildToRecovery
//==0== str:  ><
 { .blurb="Mean_MildToRecovery",
   .pvoid=&P.Mean_MildToRecovery,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_ILIToRecovery
//==0== str:  ><
 { .blurb="Mean_ILIToRecovery",
   .pvoid=&P.Mean_ILIToRecovery,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_SARIToRecovery
//==0== str:  ><
 { .blurb="Mean_SARIToRecovery",
   .pvoid=&P.Mean_SARIToRecovery,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_CriticalToCritRecov
//==0== str:  ><
 { .blurb="Mean_CriticalToCritRecov",
   .pvoid=&P.Mean_CriticalToCritRecov,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_CritRecovToRecov
//==0== str:  ><
 { .blurb="Mean_CritRecovToRecov",
   .pvoid=&P.Mean_CritRecovToRecov,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_ILIToSARI
//==0== str:  ><
 { .blurb="Mean_ILIToSARI",
   .pvoid=&P.Mean_ILIToSARI,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_ILIToDeath
//==0== str:  ><
 { .blurb="Mean_ILIToDeath",
   .pvoid=&P.Mean_ILIToDeath,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_SARIToCritical
//==0== str:  ><
 { .blurb="Mean_SARIToCritical",
   .pvoid=&P.Mean_SARIToCritical,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_SARIToDeath
//==0== str:  ><
 { .blurb="Mean_SARIToDeath",
   .pvoid=&P.Mean_SARIToDeath,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_CriticalToDeath
//==0== str:  ><
 { .blurb="Mean_CriticalToDeath",
   .pvoid=&P.Mean_CriticalToDeath,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_TimeToTest
//==0== str:  ><
 { .blurb="MeanTimeToTest",
   .pvoid=&P.Mean_TimeToTest,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_TimeToTestOffset
//==0== str:  ><
 { .blurb="MeanTimeToTestOffset",
   .pvoid=&P.Mean_TimeToTestOffset,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_TimeToTestCriticalOffset
//==0== str:  ><
 { .blurb="MeanTimeToTestCriticalOffset",
   .pvoid=&P.Mean_TimeToTestCriticalOffset,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >Mean_TimeToTestCritRecovOffset
//==0== str:  ><
 { .blurb="MeanTimeToTestCritRecovOffset",
   .pvoid=&P.Mean_TimeToTestCritRecovOffset,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >MildToRecovery_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="MildToRecovery_icdf",
   .pvoid=&P.MildToRecovery_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >ILIToRecovery_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="ILIToRecovery_icdf",
   .pvoid=&P.ILIToRecovery_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >ILIToDeath_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="ILIToDeath_icdf",
   .pvoid=&P.ILIToDeath_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >SARIToRecovery_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="SARIToRecovery_icdf",
   .pvoid=&P.SARIToRecovery_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >CriticalToCritRecov_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="CriticalToCritRecov_icdf",
   .pvoid=&P.CriticalToCritRecov_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >CritRecovToRecov_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="CritRecovToRecov_icdf",
   .pvoid=&P.CritRecovToRecov_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >ILIToSARI_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="ILIToSARI_icdf",
   .pvoid=&P.ILIToSARI_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >SARIToCritical_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="SARIToCritical_icdf",
   .pvoid=&P.SARIToCritical_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >SARIToDeath_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="SARIToDeath_icdf",
   .pvoid=&P.SARIToDeath_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >CriticalToDeath_icdf
//==0== str:  >[CDF_RES+1]<
//==1== manycolumn:  >CDF_RES+1<
 { .blurb="CriticalToDeath_icdf",
   .pvoid=&P.CriticalToDeath_icdf,
   .manyrow=1,
   .manycolumn=CDF_RES+1,
   .format="%lf",
   .cast="double" },
//===== look: >Prop_Mild_ByAge
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Prop_Mild_ByAge",
   .pvoid=&P.Prop_Mild_ByAge,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >Prop_ILI_ByAge
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Prop_ILI_ByAge",
   .pvoid=&P.Prop_ILI_ByAge,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >Prop_SARI_ByAge
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Prop_SARI_ByAge",
   .pvoid=&P.Prop_SARI_ByAge,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >Prop_Critical_ByAge
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Prop_Critical_ByAge",
   .pvoid=&P.Prop_Critical_ByAge,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >CFR_SARI_ByAge
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="CFR_SARI_ByAge",
   .pvoid=&P.CFR_SARI_ByAge,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >CFR_Critical_ByAge
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="CFR_Critical_ByAge",
   .pvoid=&P.CFR_Critical_ByAge,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >CFR_ILI_ByAge
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="CFR_ILI_ByAge",
   .pvoid=&P.CFR_ILI_ByAge,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >BoundingBox
//==0== str:  >[4]<
//==1== manycolumn:  >4<
 { .blurb="Bounding box for bitmap",
   .pvoid=&P.BoundingBox[0],
   .manyrow=1,
   .manycolumn=4,
   .format="%lf",
   .cast="double" },
//===== look: >SpatialBoundingBox
//==0== str:  >[4]<
//==1== manycolumn:  >4<
 { .blurb="Spatial domain for simulation",
   .pvoid=&P.SpatialBoundingBox[0],
   .manyrow=1,
   .manycolumn=4,
   .format="%lf",
   .cast="double" },
//===== look: >cwidth
//==0== str:  ><
 { .blurb="Grid size",
   .pvoid=&P.cwidth,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoUTM_coords
//==0== str:  ><
 { .blurb="Use long/lat coord system",
   .pvoid=&P.DoUTM_coords,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >BitmapScale
//==0== str:  ><
 { .blurb="Bitmap scale",
   .pvoid=&P.BitmapScale,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >BitmapAspectScale
//==0== str:  ><
 { .blurb="Bitmap y:x aspect scaling",
   .pvoid=&P.BitmapAspectScale,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >BitmapMovieFrame
//==0== str:  ><
 { .blurb="Bitmap movie frame interval",
   .pvoid=&P.BitmapMovieFrame,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputBitmap
//==0== str:  ><
 { .blurb="Output bitmap",
   .pvoid=&P.OutputBitmap,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputBitmapDetected
//==0== str:  ><
 { .blurb="Output bitmap detected",
   .pvoid=&P.OutputBitmapDetected,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoImmuneBitmap
//==0== str:  ><
 { .blurb="Output immunity on bitmap",
   .pvoid=&P.DoImmuneBitmap,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoInfectionTree
//==0== str:  ><
 { .blurb="Output infection tree",
   .pvoid=&P.DoInfectionTree,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoOneGen
//==0== str:  ><
 { .blurb="Do one generation",
   .pvoid=&P.DoOneGen,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputEveryRealisation
//==0== str:  ><
 { .blurb="Output every realisation",
   .pvoid=&P.OutputEveryRealisation,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MaxCorrSample
//==0== str:  ><
 { .blurb="Maximum number to sample for correlations",
   .pvoid=&P.MaxCorrSample,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoSI
//==0== str:  ><
 { .blurb="Assume SI model",
   .pvoid=&P.DoSI,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoPeriodicBoundaries
//==0== str:  ><
 { .blurb="Assume periodic boundary conditions",
   .pvoid=&P.DoPeriodicBoundaries,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputOnlyNonExtinct
//==0== str:  ><
 { .blurb="Only output non-extinct realisations",
   .pvoid=&P.OutputOnlyNonExtinct,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoPerCapitaTriggers
//==0== str:  ><
 { .blurb="Use cases per thousand threshold for area controls",
   .pvoid=&P.DoPerCapitaTriggers,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoGlobalTriggers
//==0== str:  ><
 { .blurb="Use global triggers for interventions",
   .pvoid=&P.DoGlobalTriggers,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoAdminTriggers
//==0== str:  ><
 { .blurb="Use admin unit triggers for interventions",
   .pvoid=&P.DoAdminTriggers,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoICUTriggers
//==0== str:  ><
 { .blurb="Use ICU case triggers for interventions",
   .pvoid=&P.DoICUTriggers,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >IncThreshPop
//==0== str:  ><
 { .blurb="Divisor for per-capita area threshold (default 1000)",
   .pvoid=&P.IncThreshPop,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >GlobalIncThreshPop
//==0== str:  ><
 { .blurb="Divisor for per-capita global threshold (default 1000)",
   .pvoid=&P.GlobalIncThreshPop,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >TriggersSamplingInterval
//==0== str:  ><
 { .blurb="Number of sampling intervals over which cumulative incidence measured for global trigger",
   .pvoid=&P.TriggersSamplingInterval,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PostAlertControlPropCasesId
//==0== str:  ><
 { .blurb="Proportion of cases detected for treatment",
   .pvoid=&P.PostAlertControlPropCasesId,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PreAlertControlPropCasesId
//==0== str:  ><
 { .blurb="Proportion of cases detected before outbreak alert",
   .pvoid=&P.PreAlertControlPropCasesId,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PreControlClusterIdUseDeaths
//==0== str:  ><
 { .blurb="Trigger alert on deaths",
   .pvoid=&P.PreControlClusterIdUseDeaths,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PreControlClusterIdCaseThreshold
//==0== str:  ><
 { .blurb="Number of deaths accummulated before alert",
   .pvoid=&P.PreControlClusterIdCaseThreshold,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PreControlClusterIdCaseThreshold
//==0== str:  ><
 { .blurb="Number of detected cases needed before outbreak alert triggered",
   .pvoid=&P.PreControlClusterIdCaseThreshold,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoAlertTriggerAfterInterv
//==0== str:  ><
 { .blurb="Alert trigger starts after interventions",
   .pvoid=&P.DoAlertTriggerAfterInterv,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PreControlClusterIdCalTime
//==0== str:  ><
 { .blurb="Day of year trigger is reached",
   .pvoid=&P.PreControlClusterIdCalTime,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PreIntervIdCalTime
//==0== str:  ><
 { .blurb="Day of year interventions start",
   .pvoid=&P.PreIntervIdCalTime,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PreControlClusterIdDuration
//==0== str:  ><
 { .blurb="Number of days to accummulate cases/deaths before alert",
   .pvoid=&P.PreControlClusterIdDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoEarlyCaseDiagnosis
//==0== str:  ><
 { .blurb="Only use confirmed cases to trigger alert",
   .pvoid=&P.DoEarlyCaseDiagnosis,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoPlaceGroupTreat
//==0== str:  ><
 { .blurb="Only treat mixing groups within places",
   .pvoid=&P.DoPlaceGroupTreat,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >TreatCellIncThresh
//==0== str:  ><
 { .blurb="Treatment trigger incidence per cell",
   .pvoid=&P.TreatCellIncThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >CaseIsolation_CellIncThresh
//==0== str:  ><
 { .blurb="Case isolation trigger incidence per cell",
   .pvoid=&P.CaseIsolation_CellIncThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HHQuar_CellIncThresh
//==0== str:  ><
 { .blurb="Household quarantine trigger incidence per cell",
   .pvoid=&P.HHQuar_CellIncThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatSuscDrop
//==0== str:  ><
 { .blurb="Relative susceptibility of treated individual",
   .pvoid=&P.TreatSuscDrop,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatInfDrop
//==0== str:  ><
 { .blurb="Relative infectiousness of treated individual",
   .pvoid=&P.TreatInfDrop,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatDeathDrop
//==0== str:  ><
 { .blurb="Proportion of symptomatic cases resulting in death prevented by treatment",
   .pvoid=&P.TreatDeathDrop,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatSympDrop
//==0== str:  ><
 { .blurb="Proportion of symptomatic cases prevented by treatment",
   .pvoid=&P.TreatSympDrop,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatDelayMean
//==0== str:  ><
 { .blurb="Delay to treat cell",
   .pvoid=&P.TreatDelayMean,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatCaseCourseLength
//==0== str:  ><
 { .blurb="Duration of course of treatment",
   .pvoid=&P.TreatCaseCourseLength,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatProphCourseLength
//==0== str:  ><
 { .blurb="Duration of course of prophylaxis",
   .pvoid=&P.TreatProphCourseLength,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatPropCases
//==0== str:  ><
 { .blurb="Proportion of detected cases treated",
   .pvoid=&P.TreatPropCases,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatPropCaseHouseholds
//==0== str:  ><
 { .blurb="Proportion of households of cases treated",
   .pvoid=&P.TreatPropCaseHouseholds,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatHouseholdsDuration
//==0== str:  ><
 { .blurb="Duration of household prophylaxis policy",
   .pvoid=&P.TreatHouseholdsDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatPropRadial
//==0== str:  ><
 { .blurb="Proportion treated",
   .pvoid=&P.TreatPropRadial,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatPropRadial
//==0== str:  ><
 { .blurb="Proportion treated in radial prophylaxis",
   .pvoid=&P.TreatPropRadial,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatRadius
//==0== str:  ><
 { .blurb="Treatment radius",
   .pvoid=&P.TreatRadius,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatPlaceGeogDuration
//==0== str:  ><
 { .blurb="Duration of place/geographic prophylaxis policy",
   .pvoid=&P.TreatPlaceGeogDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatTimeStartBase
//==0== str:  ><
 { .blurb="Treatment start time",
   .pvoid=&P.TreatTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatPlaceProbCaseId
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of places treated after case detected",
   .pvoid=&P.TreatPlaceProbCaseId,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >TreatPlaceTotalProp
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of people treated in targeted places",
   .pvoid=&P.TreatPlaceTotalProp,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >TreatMaxCoursesBase
//==0== str:  ><
 { .blurb="Maximum number of doses available",
   .pvoid=&P.TreatMaxCoursesBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatNewCoursesStartTime
//==0== str:  ><
 { .blurb="Start time of additional treatment production",
   .pvoid=&P.TreatNewCoursesStartTime,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatNewCoursesRate
//==0== str:  ><
 { .blurb="Rate of additional treatment production (courses per day)",
   .pvoid=&P.TreatNewCoursesRate,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TreatMaxCoursesPerCase
//==0== str:  ><
 { .blurb="Maximum number of people targeted with radial prophylaxis per case",
   .pvoid=&P.TreatMaxCoursesPerCase,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >TreatByAdminUnit
//==0== str:  ><
 { .blurb="Treat administrative units rather than rings",
   .pvoid=&P.TreatByAdminUnit,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >TreatAdminUnitDivisor
//==0== str:  ><
 { .blurb="Administrative unit divisor for treatment",
   .pvoid=&P.TreatAdminUnitDivisor,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >VaccCellIncThresh
//==0== str:  ><
 { .blurb="Vaccination trigger incidence per cell",
   .pvoid=&P.VaccCellIncThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccSuscDrop
//==0== str:  ><
 { .blurb="Relative susceptibility of vaccinated individual",
   .pvoid=&P.VaccSuscDrop,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccSuscDrop2
//==0== str:  ><
 { .blurb="Relative susceptibility of individual vaccinated after switch time",
   .pvoid=&P.VaccSuscDrop2,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccTimeEfficacySwitch
//==0== str:  ><
 { .blurb="Switch time at which vaccine efficacy increases",
   .pvoid=&P.VaccTimeEfficacySwitch,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccEfficacyDecay
//==0== str:  ><
 { .blurb="Decay rate of vaccine efficacy (per year)",
   .pvoid=&P.VaccEfficacyDecay,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccInfDrop
//==0== str:  ><
 { .blurb="Relative infectiousness of vaccinated individual",
   .pvoid=&P.VaccInfDrop,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccMortDrop
//==0== str:  ><
 { .blurb="Proportion of symptomatic cases resulting in death prevented by vaccination",
   .pvoid=&P.VaccMortDrop,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccSympDrop
//==0== str:  ><
 { .blurb="Proportion of symptomatic cases prevented by vaccination",
   .pvoid=&P.VaccSympDrop,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccDelayMean
//==0== str:  ><
 { .blurb="Delay to vaccinate",
   .pvoid=&P.VaccDelayMean,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccTimeToEfficacy
//==0== str:  ><
 { .blurb="Delay from vaccination to full protection",
   .pvoid=&P.VaccTimeToEfficacy,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccCampaignInterval
//==0== str:  ><
 { .blurb="Years between rounds of vaccination",
   .pvoid=&P.VaccCampaignInterval,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccDosePerDay
//==0== str:  ><
 { .blurb="Max vaccine doses per day",
   .pvoid=&P.VaccDosePerDay,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >VaccMaxRounds
//==0== str:  ><
 { .blurb="Maximum number of rounds of vaccination",
   .pvoid=&P.VaccMaxRounds,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >VaccPropCaseHouseholds
//==0== str:  ><
 { .blurb="Proportion of households of cases vaccinated",
   .pvoid=&P.VaccPropCaseHouseholds,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccHouseholdsDuration
//==0== str:  ><
 { .blurb="Duration of household vaccination policy",
   .pvoid=&P.VaccHouseholdsDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccTimeStartBase
//==0== str:  ><
 { .blurb="Vaccination start time",
   .pvoid=&P.VaccTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccProp
//==0== str:  ><
 { .blurb="Proportion of population vaccinated",
   .pvoid=&P.VaccProp,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccCoverageIncreasePeriod
//==0== str:  ><
 { .blurb="Time taken to reach max vaccination coverage (in years)",
   .pvoid=&P.VaccCoverageIncreasePeriod,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccTimeStartGeo
//==0== str:  ><
 { .blurb="Time to start geographic vaccination",
   .pvoid=&P.VaccTimeStartGeo,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccRadius
//==0== str:  ><
 { .blurb="Vaccination radius",
   .pvoid=&P.VaccRadius,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccMinRadius
//==0== str:  ><
 { .blurb="Minimum radius from case to vaccinate",
   .pvoid=&P.VaccMinRadius,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccMaxCoursesBase
//==0== str:  ><
 { .blurb="Maximum number of vaccine courses available",
   .pvoid=&P.VaccMaxCoursesBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccNewCoursesStartTime
//==0== str:  ><
 { .blurb="Start time of additional vaccine production",
   .pvoid=&P.VaccNewCoursesStartTime,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccNewCoursesEndTime
//==0== str:  ><
 { .blurb="End time of additional vaccine production",
   .pvoid=&P.VaccNewCoursesEndTime,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaccNewCoursesRate
//==0== str:  ><
 { .blurb="Rate of additional vaccine production (courses per day)",
   .pvoid=&P.VaccNewCoursesRate,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoMassVacc
//==0== str:  ><
 { .blurb="Apply mass rather than reactive vaccination",
   .pvoid=&P.DoMassVacc,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >VaccPriorityGroupAge
//==0== str:  >[2]<
//==1== manycolumn:  >2<
 { .blurb="Priority age range for mass vaccination",
   .pvoid=&P.VaccPriorityGroupAge,
   .manyrow=1,
   .manycolumn=2,
   .format="%i",
   .cast="int" },
//===== look: >VaccByAdminUnit
//==0== str:  ><
 { .blurb="Vaccinate administrative units rather than rings",
   .pvoid=&P.VaccByAdminUnit,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >VaccAdminUnitDivisor
//==0== str:  ><
 { .blurb="Administrative unit divisor for vaccination",
   .pvoid=&P.VaccAdminUnitDivisor,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MoveRestrCellIncThresh
//==0== str:  ><
 { .blurb="Movement restrictions trigger incidence per cell",
   .pvoid=&P.MoveRestrCellIncThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MoveDelayMean
//==0== str:  ><
 { .blurb="Delay to start movement restrictions",
   .pvoid=&P.MoveDelayMean,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >MoveRestrDuration
//==0== str:  ><
 { .blurb="Duration of movement restrictions",
   .pvoid=&P.MoveRestrDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >MoveRestrEffect
//==0== str:  ><
 { .blurb="Residual movements after restrictions",
   .pvoid=&P.MoveRestrEffect,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >MoveRestrRadius
//==0== str:  ><
 { .blurb="Minimum radius of movement restrictions",
   .pvoid=&P.MoveRestrRadius,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >MoveRestrTimeStartBase
//==0== str:  ><
 { .blurb="Movement restrictions start time",
   .pvoid=&P.MoveRestrTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoBlanketMoveRestr
//==0== str:  ><
 { .blurb="Impose blanket movement restrictions",
   .pvoid=&P.DoBlanketMoveRestr,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoMoveRestrOnceOnly
//==0== str:  ><
 { .blurb="Movement restrictions only once",
   .pvoid=&P.DoMoveRestrOnceOnly,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MoveRestrByAdminUnit
//==0== str:  ><
 { .blurb="Movement restrictions in administrative units rather than rings",
   .pvoid=&P.MoveRestrByAdminUnit,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MoveRestrAdminUnitDivisor
//==0== str:  ><
 { .blurb="Administrative unit divisor for movement restrictions",
   .pvoid=&P.MoveRestrAdminUnitDivisor,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoInterventionDelaysByAdUnit
//==0== str:  ><
 { .blurb="Include intervention delays by admin unit",
   .pvoid=&P.DoInterventionDelaysByAdUnit,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AdunitDelayToSocialDistance
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Delay to social distancing by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >AdunitDelayToHQuarantine
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Delay to household quarantine by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >AdunitDelayToCaseIsolation
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Delay to case isolation by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >AdunitDelayToPlaceClose
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Delay to place closure by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >AdunitDurationSocialDistance
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Duration of social distancing by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >AdunitDurationHQuarantine
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Duration of household quarantine by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >AdunitDurationCaseIsolation
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Duration of case isolation by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >AdunitDurationPlaceClose
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Duration of place closure by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >DoDigitalContactTracing
//==0== str:  ><
 { .blurb="Include digital contact tracing",
   .pvoid=&P.DoDigitalContactTracing,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DigitalContactTracing_CellIncThresh
//==0== str:  ><
 { .blurb="Digital contact tracing trigger incidence per cell",
   .pvoid=&P.DigitalContactTracing_CellIncThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PropPopUsingDigitalContactTracing
//==0== str:  ><
 { .blurb="Proportion of population or households covered by digital contact tracing",
   .pvoid=&P.PropPopUsingDigitalContactTracing,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >ProportionSmartphoneUsersByAge
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Proportion of smartphone users by age",
   .pvoid=&P.ProportionSmartphoneUsersByAge,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >ClusterDigitalContactUsers
//==0== str:  ><
 { .blurb="Cluster digital app clusters by household",
   .pvoid=&P.ClusterDigitalContactUsers,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >ProportionDigitalContactsIsolate
//==0== str:  ><
 { .blurb="Proportion of digital contacts who self-isolate",
   .pvoid=&P.ProportionDigitalContactsIsolate,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DigitalContactTracingDelay
//==0== str:  ><
 { .blurb="Delay between isolation of index case and contacts",
   .pvoid=&P.DigitalContactTracingDelay,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >LengthDigitalContactIsolation
//==0== str:  ><
 { .blurb="Length of self-isolation for digital contacts",
   .pvoid=&P.LengthDigitalContactIsolation,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >ScalingFactorSpatialDigitalContacts
//==0== str:  ><
 { .blurb="Spatial scaling factor - digital contact tracing",
   .pvoid=&P.ScalingFactorSpatialDigitalContacts,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >ScalingFactorPlaceDigitalContacts
//==0== str:  ><
 { .blurb="Place scaling factor - digital contact tracing",
   .pvoid=&P.ScalingFactorPlaceDigitalContacts,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DigitalContactTracingTimeStartBase
//==0== str:  ><
 { .blurb="Digital contact tracing start time",
   .pvoid=&P.DigitalContactTracingTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DigitalContactTracingPolicyDuration
//==0== str:  ><
 { .blurb="Duration of digital contact tracing policy",
   .pvoid=&P.DigitalContactTracingPolicyDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >OutputDigitalContactTracing
//==0== str:  ><
 { .blurb="Output digital contact tracing",
   .pvoid=&P.OutputDigitalContactTracing,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OutputDigitalContactDist
//==0== str:  ><
 { .blurb="Output digital contact distribution",
   .pvoid=&P.OutputDigitalContactDist,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >IncludeHouseholdDigitalContactTracing
//==0== str:  ><
 { .blurb="Include household contacts in digital contact tracing",
   .pvoid=&P.IncludeHouseholdDigitalContactTracing,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >IncludePlaceGroupDigitalContactTracing
//==0== str:  ><
 { .blurb="Include place group contacts in digital contact tracing",
   .pvoid=&P.IncludePlaceGroupDigitalContactTracing,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AdunitDelayToDCT
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Delay to digital contact tracing by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >AdunitDurationDCT
//==0== str:  >[MAX_ADUNITS]<
//==1== manycolumn:  >MAX_ADUNITS<
 { .blurb="Duration of digital contact tracing by admin unit",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=MAX_ADUNITS,
   .format="%lf",
   .cast="double" },
//===== look: >DCTIsolateIndexCases
//==0== str:  ><
 { .blurb="Isolate index cases in digital contact tracing",
   .pvoid=&P.DCTIsolateIndexCases,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DCTCaseIsolationEffectiveness
//==0== str:  ><
 { .blurb="Residual contacts after digital contact tracing isolation",
   .pvoid=&P.DCTCaseIsolationEffectiveness,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DCTCaseIsolationHouseEffectiveness
//==0== str:  ><
 { .blurb="Residual household contacts after digital contact tracing isolation",
   .pvoid=&P.DCTCaseIsolationHouseEffectiveness,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DelayFromIndexCaseDetectionToDCTIsolation
//==0== str:  ><
 { .blurb="Delay between symptom onset and isolation for index case",
   .pvoid=&P.DelayFromIndexCaseDetectionToDCTIsolation,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoDCTTest
//==0== str:  ><
 { .blurb="Test index cases and contacts",
   .pvoid=&P.DoDCTTest,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DelayToTestIndexCase
//==0== str:  ><
 { .blurb="Delay to test index case",
   .pvoid=&P.DelayToTestIndexCase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DelayToTestDCTContacts
//==0== str:  ><
 { .blurb="Delay to test DCT contacts",
   .pvoid=&P.DelayToTestDCTContacts,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SpecificityDCT
//==0== str:  ><
 { .blurb="Testing specificity - DCT",
   .pvoid=&P.SpecificityDCT,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SensitivityDCT
//==0== str:  ><
 { .blurb="Testing sensitivity - DCT",
   .pvoid=&P.SensitivityDCT,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >FindContactsOfDCTContacts
//==0== str:  ><
 { .blurb="Find contacts of digital contacts",
   .pvoid=&P.FindContactsOfDCTContacts,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >RemoveContactsOfNegativeIndexCase
//==0== str:  ><
 { .blurb="Remove contacts of a negative index case",
   .pvoid=&P.RemoveContactsOfNegativeIndexCase,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseCellIncThresh1
//==0== str:  ><
 { .blurb="Trigger incidence per cell for place closure",
   .pvoid=&P.PlaceCloseCellIncThresh1,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseCellIncThresh2
//==0== str:  ><
 { .blurb="Trigger incidence per cell for second place closure",
   .pvoid=&P.PlaceCloseCellIncThresh2,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseCellIncStopThresh
//==0== str:  ><
 { .blurb="Trigger incidence per cell for end of place closure",
   .pvoid=&P.PlaceCloseCellIncStopThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseDelayMean
//==0== str:  ><
 { .blurb="Delay to start place closure",
   .pvoid=&P.PlaceCloseDelayMean,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseDurationBase
//==0== str:  ><
 { .blurb="Duration of place closure",
   .pvoid=&P.PlaceCloseDurationBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseDuration2
//==0== str:  ><
 { .blurb="Duration of second place closure",
   .pvoid=&P.PlaceCloseDuration2,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseEffect
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of places remaining open after closure by place type",
   .pvoid=&P.PlaceCloseEffect,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceClosePropAttending
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportional attendance after closure by place type",
   .pvoid=&P.PlaceClosePropAttending,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseHouseholdRelContact
//==0== str:  ><
 { .blurb="Relative household contact rate after closure",
   .pvoid=&P.PlaceCloseHouseholdRelContact,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseSpatialRelContact
//==0== str:  ><
 { .blurb="Relative spatial contact rate after closure",
   .pvoid=&P.PlaceCloseSpatialRelContact,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoHolidays
//==0== str:  ><
 { .blurb="Include holidays",
   .pvoid=&P.DoHolidays,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >HolidayEffect
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of places remaining open during holidays by place type",
   .pvoid=&P.HolidayEffect,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >NumHolidays
//==0== str:  ><
 { .blurb="Number of holidays",
   .pvoid=&P.NumHolidays,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >HolidayStartTime
//==0== str:  >[DAYS_PER_YEAR]<
//==1== manycolumn:  >DAYS_PER_YEAR<
 { .blurb="Holiday start times",
   .pvoid=&P.HolidayStartTime,
   .manyrow=1,
   .manycolumn=DAYS_PER_YEAR,
   .format="%lf",
   .cast="double" },
//===== look: >HolidayDuration
//==0== str:  >[DAYS_PER_YEAR]<
//==1== manycolumn:  >DAYS_PER_YEAR<
 { .blurb="Holiday durations",
   .pvoid=&P.HolidayDuration,
   .manyrow=1,
   .manycolumn=DAYS_PER_YEAR,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseRadius
//==0== str:  ><
 { .blurb="Minimum radius for place closure",
   .pvoid=&P.PlaceCloseRadius,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseTimeStartBase
//==0== str:  ><
 { .blurb="Place closure start time",
   .pvoid=&P.PlaceCloseTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseTimeStartBase2
//==0== str:  ><
 { .blurb="Place closure second start time",
   .pvoid=&P.PlaceCloseTimeStartBase2,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoPlaceCloseOnceOnly
//==0== str:  ><
 { .blurb="Places close only once",
   .pvoid=&P.DoPlaceCloseOnceOnly,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseIncTrig1
//==0== str:  ><
 { .blurb="Place closure incidence threshold",
   .pvoid=&P.PlaceCloseIncTrig1,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseIncTrig2
//==0== str:  ><
 { .blurb="Place closure second incidence threshold",
   .pvoid=&P.PlaceCloseIncTrig2,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseFracIncTrig
//==0== str:  ><
 { .blurb="Place closure fractional incidence threshold",
   .pvoid=&P.PlaceCloseFracIncTrig,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseByAdminUnit
//==0== str:  ><
 { .blurb="Place closure in administrative units rather than rings",
   .pvoid=&P.PlaceCloseByAdminUnit,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseAdminUnitDivisor
//==0== str:  ><
 { .blurb="Administrative unit divisor for place closure",
   .pvoid=&P.PlaceCloseAdminUnitDivisor,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseAdunitPlaceTypes
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Place types to close for admin unit closure (0/1 array)",
   .pvoid=&P.PlaceCloseAdunitPlaceTypes,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >PlaceCloseCasePropThresh
//==0== str:  ><
 { .blurb="Cumulative proportion of place members needing to become sick for admin unit closure",
   .pvoid=&P.PlaceCloseCasePropThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >PlaceCloseAdunitPropThresh
//==0== str:  ><
 { .blurb="Proportion of places in admin unit needing to pass threshold for place closure",
   .pvoid=&P.PlaceCloseAdunitPropThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistCellIncThresh
//==0== str:  ><
 { .blurb="Trigger incidence per cell for social distancing",
   .pvoid=&P.SocDistCellIncThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >SocDistCellIncStopThresh
//==0== str:  ><
 { .blurb="Trigger incidence per cell for end of social distancing",
   .pvoid=&P.SocDistCellIncStopThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >SocDistDuration
//==0== str:  ><
 { .blurb="Duration of social distancing",
   .pvoid=&P.SocDistDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistDuration2
//==0== str:  ><
 { .blurb="Duration of social distancing after change",
   .pvoid=&P.SocDistDuration2,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistPlaceEffect
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Relative place contact rate given social distancing by place type",
   .pvoid=&P.SocDistPlaceEffect,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >EnhancedSocDistPlaceEffect
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Relative place contact rate given enhanced social distancing by place type",
   .pvoid=&P.EnhancedSocDistPlaceEffect,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistPlaceEffect2
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Relative place contact rate given social distancing by place type after change",
   .pvoid=&P.SocDistPlaceEffect2,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >EnhancedSocDistPlaceEffect2
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Relative place contact rate given enhanced social distancing by place type after change",
   .pvoid=&P.EnhancedSocDistPlaceEffect2,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistHouseholdEffect
//==0== str:  ><
 { .blurb="Relative household contact rate given social distancing",
   .pvoid=&P.SocDistHouseholdEffect,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >EnhancedSocDistHouseholdEffect
//==0== str:  ><
 { .blurb="Relative household contact rate given enhanced social distancing",
   .pvoid=&P.EnhancedSocDistHouseholdEffect,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistHouseholdEffect2
//==0== str:  ><
 { .blurb="Relative household contact rate given social distancing  after change",
   .pvoid=&P.SocDistHouseholdEffect2,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >EnhancedSocDistHouseholdEffect2
//==0== str:  ><
 { .blurb="Relative household contact rate given enhanced social distancing after change",
   .pvoid=&P.EnhancedSocDistHouseholdEffect2,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >EnhancedSocDistClusterByHousehold
//==0== str:  ><
 { .blurb="Cluster compliance with enhanced social distancing by household",
   .pvoid=&P.EnhancedSocDistClusterByHousehold,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >SocDistSpatialEffect
//==0== str:  ><
 { .blurb="Relative spatial contact rate given social distancing",
   .pvoid=&P.SocDistSpatialEffect,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistSpatialEffect2
//==0== str:  ><
 { .blurb="Relative spatial contact rate given social distancing after change",
   .pvoid=&P.SocDistSpatialEffect2,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistRadius
//==0== str:  ><
 { .blurb="Minimum radius for social distancing",
   .pvoid=&P.SocDistRadius,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistTimeStartBase
//==0== str:  ><
 { .blurb="Social distancing start time",
   .pvoid=&P.SocDistTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >SocDistChangeDelay
//==0== str:  ><
 { .blurb="Delay for change in effectiveness of social distancing",
   .pvoid=&P.SocDistChangeDelay,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >EnhancedSocDistProportionCompliant
//==0== str:  >[NUM_AGE_GROUPS]<
//==1== manycolumn:  >NUM_AGE_GROUPS<
 { .blurb="Proportion compliant with enhanced social distancing by age group",
   .pvoid=&P.EnhancedSocDistProportionCompliant,
   .manyrow=1,
   .manycolumn=NUM_AGE_GROUPS,
   .format="%lf",
   .cast="double" },
//===== look: >t
//==0== str:  ><
 { .blurb="Proportion compliant with enhanced social distancing",
   .pvoid=NULL,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >EnhancedSocDistSpatialEffect
//==0== str:  ><
 { .blurb="Relative spatial contact rate given enhanced social distancing",
   .pvoid=&P.EnhancedSocDistSpatialEffect,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >EnhancedSocDistSpatialEffect2
//==0== str:  ><
 { .blurb="Relative spatial contact rate given enhanced social distancing after change",
   .pvoid=&P.EnhancedSocDistSpatialEffect2,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoSocDistOnceOnly
//==0== str:  ><
 { .blurb="Social distancing only once",
   .pvoid=&P.DoSocDistOnceOnly,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >AirportCloseEffectiveness
//==0== str:  ><
 { .blurb="Airport closure effectiveness",
   .pvoid=&P.AirportCloseEffectiveness,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >AirportCloseTimeStartBase
//==0== str:  ><
 { .blurb="Airport closure start time",
   .pvoid=&P.AirportCloseTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >AirportCloseDuration
//==0== str:  ><
 { .blurb="Airport closure duration",
   .pvoid=&P.AirportCloseDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoHQretrigger
//==0== str:  ><
 { .blurb="Retrigger household quarantine with each new case in quarantine window",
   .pvoid=&P.DoHQretrigger,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >HQuarantineTimeStartBase
//==0== str:  ><
 { .blurb="Household quarantine start time",
   .pvoid=&P.HQuarantineTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HQuarantineHouseDelay
//==0== str:  ><
 { .blurb="Delay to start household quarantine",
   .pvoid=&P.HQuarantineHouseDelay,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HQuarantineHouseDuration
//==0== str:  ><
 { .blurb="Length of time households are quarantined",
   .pvoid=&P.HQuarantineHouseDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HQuarantinePolicyDuration
//==0== str:  ><
 { .blurb="Duration of household quarantine policy",
   .pvoid=&P.HQuarantinePolicyDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HQuarantineHouseEffect
//==0== str:  ><
 { .blurb="Relative household contact rate after quarantine",
   .pvoid=&P.HQuarantineHouseEffect,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HQuarantinePlaceEffect
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Residual place contacts after household quarantine by place type",
   .pvoid=&P.HQuarantinePlaceEffect,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >HQuarantineSpatialEffect
//==0== str:  ><
 { .blurb="Residual spatial contacts after household quarantine",
   .pvoid=&P.HQuarantineSpatialEffect,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HQuarantinePropHouseCompliant
//==0== str:  ><
 { .blurb="Household level compliance with quarantine",
   .pvoid=&P.HQuarantinePropHouseCompliant,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >HQuarantinePropIndivCompliant
//==0== str:  ><
 { .blurb="Individual level compliance with quarantine",
   .pvoid=&P.HQuarantinePropIndivCompliant,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >CaseIsolationTimeStartBase
//==0== str:  ><
 { .blurb="Case isolation start time",
   .pvoid=&P.CaseIsolationTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >CaseIsolationProp
//==0== str:  ><
 { .blurb="Proportion of detected cases isolated",
   .pvoid=&P.CaseIsolationProp,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >CaseIsolationDelay
//==0== str:  ><
 { .blurb="Delay to start case isolation",
   .pvoid=&P.CaseIsolationDelay,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >CaseIsolationDuration
//==0== str:  ><
 { .blurb="Duration of case isolation",
   .pvoid=&P.CaseIsolationDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >CaseIsolationPolicyDuration
//==0== str:  ><
 { .blurb="Duration of case isolation policy",
   .pvoid=&P.CaseIsolationPolicyDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >CaseIsolationEffectiveness
//==0== str:  ><
 { .blurb="Residual contacts after case isolation",
   .pvoid=&P.CaseIsolationEffectiveness,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >CaseIsolationHouseEffectiveness
//==0== str:  ><
 { .blurb="Residual household contacts after case isolation",
   .pvoid=&P.CaseIsolationHouseEffectiveness,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >VaryEfficaciesOverTime
//==0== str:  ><
 { .blurb="Vary efficacies over time",
   .pvoid=&P.VaryEfficaciesOverTime,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >Num_SD_ChangeTimes
//==0== str:  ><
 { .blurb="Number of change times for levels of social distancing",
   .pvoid=&P.Num_SD_ChangeTimes,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >Num_CI_ChangeTimes
//==0== str:  ><
 { .blurb="Number of change times for levels of case isolation",
   .pvoid=&P.Num_CI_ChangeTimes,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >Num_HQ_ChangeTimes
//==0== str:  ><
 { .blurb="Number of change times for levels of household quarantine",
   .pvoid=&P.Num_HQ_ChangeTimes,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >Num_PC_ChangeTimes
//==0== str:  ><
 { .blurb="Number of change times for levels of place closure",
   .pvoid=&P.Num_PC_ChangeTimes,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >Num_DCT_ChangeTimes
//==0== str:  ><
 { .blurb="Number of change times for levels of digital contact tracing",
   .pvoid=&P.Num_DCT_ChangeTimes,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >SD_ChangeTimes
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Change times for levels of social distancing",
   .pvoid=&P.SD_ChangeTimes,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%i",
   .cast="int" },
//===== look: >CI_ChangeTimes
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Change times for levels of case isolation",
   .pvoid=&P.CI_ChangeTimes,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%i",
   .cast="int" },
//===== look: >HQ_ChangeTimes
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Change times for levels of household quarantine",
   .pvoid=&P.HQ_ChangeTimes,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%i",
   .cast="int" },
//===== look: >PC_ChangeTimes
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Change times for levels of place closure",
   .pvoid=&P.PC_ChangeTimes,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%i",
   .cast="int" },
//===== look: >DCT_ChangeTimes
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Change times for levels of digital contact tracing",
   .pvoid=&P.DCT_ChangeTimes,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%i",
   .cast="int" },
//===== look: >SD_SpatialEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Relative spatial contact rates over time given social distancing",
   .pvoid=&P.SD_SpatialEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >Enhanced_SD_SpatialEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Relative spatial contact rates over time given enhanced social distancing",
   .pvoid=&P.Enhanced_SD_SpatialEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >CI_SpatialAndPlaceEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Residual contacts after case isolation over time",
   .pvoid=&P.CI_SpatialAndPlaceEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >HQ_SpatialEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Residual spatial contacts over time after household quarantine",
   .pvoid=&P.HQ_SpatialEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >PC_SpatialEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Relative spatial contact rates over time after place closure",
   .pvoid=&P.PC_SpatialEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >DCT_SpatialAndPlaceEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Residual contacts after digital contact tracing isolation over time",
   .pvoid=&P.DCT_SpatialAndPlaceEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >SD_HouseholdEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Relative household contact rates over time given social distancing",
   .pvoid=&P.SD_HouseholdEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >Enhanced_SD_HouseholdEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Relative household contact rates over time given enhanced social distancing",
   .pvoid=&P.Enhanced_SD_HouseholdEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >CI_HouseholdEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Residual household contacts after case isolation over time",
   .pvoid=&P.CI_HouseholdEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >HQ_HouseholdEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Relative household contact rates over time after quarantine",
   .pvoid=&P.HQ_HouseholdEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >PC_HouseholdEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Relative household contact rates over time after place closure",
   .pvoid=&P.PC_HouseholdEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >DCT_HouseholdEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Residual household contacts after digital contact tracing isolation over time",
   .pvoid=&P.DCT_HouseholdEffects_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >SD_PlaceEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]<
//==2== manyrow:     >MAX_NUM_INTERVENTION_CHANGE_TIMES<
//==2== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Relative place contact rates over time given social distancing by place type",
   .pvoid=&P.SD_PlaceEffects_OverTime[0][0],
   .manyrow=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >Enhanced_SD_PlaceEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]<
//==2== manyrow:     >MAX_NUM_INTERVENTION_CHANGE_TIMES<
//==2== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Relative place contact rates over time given enhanced social distancing by place type",
   .pvoid=&P.Enhanced_SD_PlaceEffects_OverTime[0][0],
   .manyrow=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >HQ_PlaceEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]<
//==2== manyrow:     >MAX_NUM_INTERVENTION_CHANGE_TIMES<
//==2== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Residual place contacts over time after household quarantine by place type",
   .pvoid=&P.HQ_PlaceEffects_OverTime[0][0],
   .manyrow=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PC_PlaceEffects_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]<
//==2== manyrow:     >MAX_NUM_INTERVENTION_CHANGE_TIMES<
//==2== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of places remaining open after closure by place type over time",
   .pvoid=&P.PC_PlaceEffects_OverTime[0][0],
   .manyrow=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >PC_PropAttending_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]<
//==2== manyrow:     >MAX_NUM_INTERVENTION_CHANGE_TIMES<
//==2== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportional attendance after closure by place type over time",
   .pvoid=&P.PC_PropAttending_OverTime[0][0],
   .manyrow=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >CI_Prop_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Proportion of detected cases isolated over time",
   .pvoid=&P.CI_Prop_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >HQ_Individual_PropComply_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Individual level compliance with quarantine over time",
   .pvoid=&P.HQ_Individual_PropComply_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >HQ_Household_PropComply_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Household level compliance with quarantine over time",
   .pvoid=&P.HQ_Household_PropComply_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >DCT_Prop_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Proportion of digital contacts who self-isolate over time",
   .pvoid=&P.DCT_Prop_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >PC_IncThresh_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Place closure incidence threshold over time",
   .pvoid=&P.PC_IncThresh_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="int" },
//===== look: >PC_FracIncThresh_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Place closure fractional incidence threshold over time",
   .pvoid=&P.PC_FracIncThresh_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >PC_CellIncThresh_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Trigger incidence per cell for place closure over time",
   .pvoid=&P.PC_CellIncThresh_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%i",
   .cast="int" },
//===== look: >HQ_CellIncThresh_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Household quarantine trigger incidence per cell over time",
   .pvoid=&P.HQ_CellIncThresh_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >CI_CellIncThresh_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Case isolation trigger incidence per cell over time",
   .pvoid=&P.CI_CellIncThresh_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >SD_CellIncThresh_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Trigger incidence per cell for social distancing over time",
   .pvoid=&P.SD_CellIncThresh_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%i",
   .cast="int" },
//===== look: >PC_Durs_OverTime
//==0== str:  >[MAX_NUM_INTERVENTION_CHANGE_TIMES]<
//==1== manycolumn:  >MAX_NUM_INTERVENTION_CHANGE_TIMES<
 { .blurb="Duration of place closure over time",
   .pvoid=&P.PC_Durs_OverTime,
   .manyrow=1,
   .manycolumn=MAX_NUM_INTERVENTION_CHANGE_TIMES,
   .format="%lf",
   .cast="double" },
//===== look: >KeyWorkerPopNum
//==0== str:  ><
 { .blurb="Number of key workers randomly distributed in the population",
   .pvoid=&P.KeyWorkerPopNum,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >KeyWorkerPlaceNum
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Number of key workers in different places by place type",
   .pvoid=&P.KeyWorkerPlaceNum,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%i",
   .cast="int" },
//===== look: >KeyWorkerPropInKeyPlaces
//==0== str:  >[NUM_PLACE_TYPES]<
//==1== manycolumn:  >NUM_PLACE_TYPES<
 { .blurb="Proportion of staff who are key workers per chosen place by place type",
   .pvoid=&P.KeyWorkerPropInKeyPlaces,
   .manyrow=1,
   .manycolumn=NUM_PLACE_TYPES,
   .format="%lf",
   .cast="double" },
//===== look: >KeyWorkerProphCellIncThresh
//==0== str:  ><
 { .blurb="Trigger incidence per cell for key worker prophylaxis",
   .pvoid=&P.KeyWorkerProphCellIncThresh,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >KeyWorkerProphTimeStartBase
//==0== str:  ><
 { .blurb="Key worker prophylaxis start time",
   .pvoid=&P.KeyWorkerProphTimeStartBase,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >KeyWorkerProphDuration
//==0== str:  ><
 { .blurb="Duration of key worker prophylaxis",
   .pvoid=&P.KeyWorkerProphDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >KeyWorkerProphRenewalDuration
//==0== str:  ><
 { .blurb="Time interval from start of key worker prophylaxis before policy restarted",
   .pvoid=&P.KeyWorkerProphRenewalDuration,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >KeyWorkerHouseProp
//==0== str:  ><
 { .blurb="Proportion of key workers whose households are also treated as key workers",
   .pvoid=&P.KeyWorkerHouseProp,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >KeyWorkerProphRadius
//==0== str:  ><
 { .blurb="Minimum radius for key worker prophylaxis",
   .pvoid=&P.KeyWorkerProphRadius,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >DoRecordInfEvents
//==0== str:  ><
 { .blurb="Record infection events",
   .pvoid=&P.DoRecordInfEvents,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MaxInfEvents
//==0== str:  ><
 { .blurb="Max number of infection events to record",
   .pvoid=&P.MaxInfEvents,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >RecordInfEventsPerRun
//==0== str:  ><
 { .blurb="Record infection events per run",
   .pvoid=&P.RecordInfEventsPerRun,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >LimitNumInfections
//==0== str:  ><
 { .blurb="Limit number of infections",
   .pvoid=&P.LimitNumInfections,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MaxNumInfections
//==0== str:  ><
 { .blurb="Max number of infections",
   .pvoid=&P.MaxNumInfections,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >DoOriginDestinationMatrix
//==0== str:  ><
 { .blurb="Output origin destination matrix",
   .pvoid=&P.DoOriginDestinationMatrix,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MeanChildAgeGap
//==0== str:  ><
 { .blurb="Mean child age gap",
   .pvoid=&P.MeanChildAgeGap,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MinAdultAge
//==0== str:  ><
 { .blurb="Min adult age",
   .pvoid=&P.MinAdultAge,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MaxMFPartnerAgeGap
//==0== str:  ><
 { .blurb="Max MF partner age gap",
   .pvoid=&P.MaxMFPartnerAgeGap,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MaxFMPartnerAgeGap
//==0== str:  ><
 { .blurb="Max FM partner age gap",
   .pvoid=&P.MaxFMPartnerAgeGap,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MinParentAgeGap
//==0== str:  ><
 { .blurb="Min parent age gap",
   .pvoid=&P.MinParentAgeGap,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MaxParentAgeGap
//==0== str:  ><
 { .blurb="Max parent age gap",
   .pvoid=&P.MaxParentAgeGap,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >MaxChildAge
//==0== str:  ><
 { .blurb="Max child age",
   .pvoid=&P.MaxChildAge,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OneChildTwoPersProb
//==0== str:  ><
 { .blurb="One Child Two Pers Prob",
   .pvoid=&P.OneChildTwoPersProb,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TwoChildThreePersProb
//==0== str:  ><
 { .blurb="Two Child Three Pers Prob",
   .pvoid=&P.TwoChildThreePersProb,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >OnePersHouseProbOld
//==0== str:  ><
 { .blurb="One Pers House Prob Old",
   .pvoid=&P.OnePersHouseProbOld,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TwoPersHouseProbOld
//==0== str:  ><
 { .blurb="Two Pers House Prob Old",
   .pvoid=&P.TwoPersHouseProbOld,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >OnePersHouseProbYoung
//==0== str:  ><
 { .blurb="One Pers House Prob Young",
   .pvoid=&P.OnePersHouseProbYoung,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TwoPersHouseProbYoung
//==0== str:  ><
 { .blurb="Two Pers House Prob Young",
   .pvoid=&P.TwoPersHouseProbYoung,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >OneChildProbYoungestChildUnderFive
//==0== str:  ><
 { .blurb="One Child Prob Youngest Child Under Five",
   .pvoid=&P.OneChildProbYoungestChildUnderFive,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >TwoChildrenProbYoungestUnderFive
//==0== str:  ><
 { .blurb="Two Children Prob Youngest Under Five",
   .pvoid=&P.TwoChildrenProbYoungestUnderFive,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >ProbYoungestChildUnderFive
//==0== str:  ><
 { .blurb="Prob Youngest Child Under Five",
   .pvoid=&P.ProbYoungestChildUnderFive,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >ZeroChildThreePersProb
//==0== str:  ><
 { .blurb="Zero Child Three Pers Prob",
   .pvoid=&P.ZeroChildThreePersProb,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >OneChildFourPersProb
//==0== str:  ><
 { .blurb="One Child Four Pers Prob",
   .pvoid=&P.OneChildFourPersProb,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >YoungAndSingleSlope
//==0== str:  ><
 { .blurb="Young And Single Slope",
   .pvoid=&P.YoungAndSingleSlope,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >YoungAndSingle
//==0== str:  ><
 { .blurb="Young And Single",
   .pvoid=&P.YoungAndSingle,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >NoChildPersAge
//==0== str:  ><
 { .blurb="No Child Pers Age",
   .pvoid=&P.NoChildPersAge,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >OldPersAge
//==0== str:  ><
 { .blurb="Old Pers Age",
   .pvoid=&P.OldPersAge,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
//===== look: >ThreeChildFivePersProb
//==0== str:  ><
 { .blurb="Three Child Five Pers Prob",
   .pvoid=&P.ThreeChildFivePersProb,
   .manyrow=1,
   .manycolumn=1,
   .format="%lf",
   .cast="double" },
//===== look: >OlderGenGap
//==0== str:  ><
 { .blurb="Older Gen Gap",
   .pvoid=&P.OlderGenGap,
   .manyrow=1,
   .manycolumn=1,
   .format="%i",
   .cast="int" },
 { .blurb[0]=0 }
};
