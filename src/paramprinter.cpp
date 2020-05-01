/* *************************************************//** @file paramprinter.cpp
@author  Richard Michael Thomas <rmthomas@sciolus.org>
@note    This file has been written by script mkparamprinter.sh
@warning Edits made prior to runs of mkparamprinter.sh will be lost.
@note    This file is a component of project covid-simpler.
*//* *************************************************************************/

#include <stdio.h>
#include "Param.h"
#include "Constants.h"
#include "Country.h"
#include "Model.h"

void
paramprinter(FILE *pFILE, param *pP, adminunit A[])
{
int i, j;

fprintf(pFILE,"P.N=%i\n", pP->N);
fprintf(pFILE,"P.NH=%i\n", pP->NH);
fprintf(pFILE,"P.NR=%i\n", pP->NR);
fprintf(pFILE,"P.NRN=%i\n", pP->NRN);
fprintf(pFILE,"P.NRactual=%i\n", pP->NRactual);
fprintf(pFILE,"P.NRactE=%i\n", pP->NRactE);
fprintf(pFILE,"P.NRactNE=%i\n", pP->NRactNE);
fprintf(pFILE,"P.UpdatesPerSample=%i\n", pP->UpdatesPerSample);
fprintf(pFILE,"P.NumSamples=%i\n", pP->NumSamples);
fprintf(pFILE,"P.KernelType=%i\n", pP->KernelType);
fprintf(pFILE,"P.NKR=%i\n", pP->NKR);
fprintf(pFILE,"P.NK_HR=%i\n", pP->NK_HR);
fprintf(pFILE,"P.MoveKernelType=%i\n", pP->MoveKernelType);
fprintf(pFILE,"P.AirportKernelType=%i\n", pP->AirportKernelType);
fprintf(pFILE,"P.BinFileLen=%i\n", pP->BinFileLen);
fprintf(pFILE,"P.DoBin=%i\n", pP->DoBin);
fprintf(pFILE,"P.DoSaveSnapshot=%i\n", pP->DoSaveSnapshot);
fprintf(pFILE,"P.DoLoadSnapshot=%i\n", pP->DoLoadSnapshot);
fprintf(pFILE,"P.SnapshotSaveTime=%f\n", pP->SnapshotSaveTime);
fprintf(pFILE,"P.SnapshotLoadTime=%f\n", pP->SnapshotLoadTime);
fprintf(pFILE,"P.clP1=%f\n", pP->clP1);
fprintf(pFILE,"P.clP2=%f\n", pP->clP2);
fprintf(pFILE,"P.clP3=%f\n", pP->clP3);
fprintf(pFILE,"P.clP4=%f\n", pP->clP4);
fprintf(pFILE,"P.clP5=%f\n", pP->clP5);
fprintf(pFILE,"P.clP6=%f\n", pP->clP6);
fprintf(pFILE,"P.NC=%i\n", pP->NC);
fprintf(pFILE,"P.NMC=%i\n", pP->NMC);
fprintf(pFILE,"P.NMCL=%i\n", pP->NMCL);
fprintf(pFILE,"P.NCP=%i\n", pP->NCP);
fprintf(pFILE,"P.NMCP=%i\n", pP->NMCP);
fprintf(pFILE,"P.ncw=%i\n", pP->ncw);
fprintf(pFILE,"P.nch=%i\n", pP->nch);
fprintf(pFILE,"P.nmcw=%i\n", pP->nmcw);
fprintf(pFILE,"P.nmch=%i\n", pP->nmch);
fprintf(pFILE,"P.DoUTM_coords=%i\n", pP->DoUTM_coords);
fprintf(pFILE,"P.nsp=%i\n", pP->nsp);
fprintf(pFILE,"P.DoSeasonality=%i\n", pP->DoSeasonality);
fprintf(pFILE,"P.DoCorrectAgeDist=%i\n", pP->DoCorrectAgeDist);
fprintf(pFILE,"P.DoPartialImmunity=%i\n", pP->DoPartialImmunity);
fprintf(pFILE,"P.DoAdUnits=%i\n", pP->DoAdUnits);
fprintf(pFILE,"P.NumAdunits=%i\n", pP->NumAdunits);
fprintf(pFILE,"P.DoAdunitBoundaries=%i\n", pP->DoAdunitBoundaries);
fprintf(pFILE,"P.AdunitLevel1Divisor=%i\n", pP->AdunitLevel1Divisor);
fprintf(pFILE,"P.AdunitLevel1Mask=%i\n", pP->AdunitLevel1Mask);
fprintf(pFILE,"P.AdunitBitmapDivisor=%i\n", pP->AdunitBitmapDivisor);
fprintf(pFILE,"P.CountryDivisor=%i\n", pP->CountryDivisor);
fprintf(pFILE,"P.DoAdunitOutput=%i\n", pP->DoAdunitOutput);
fprintf(pFILE,"P.DoAdunitBoundaryOutput=%i\n", pP->DoAdunitBoundaryOutput);
fprintf(pFILE,"P.DoAdunitDemog=%i\n", pP->DoAdunitDemog);
fprintf(pFILE,"P.DoCorrectAdunitPop=%i\n", pP->DoCorrectAdunitPop);
fprintf(pFILE,"P.DoSpecifyPop=%i\n", pP->DoSpecifyPop);
fprintf(pFILE,"P.AdunitLevel1Lookup[ADUNIT_LOOKUP_SIZE]=");
for (j = 0; j < ADUNIT_LOOKUP_SIZE; j++)
  {
  fprintf(pFILE,"  %i", pP->AdunitLevel1Lookup[j]);
  if ( ! pP->AdunitLevel1Lookup[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.DoOutputPlaceDistForOneAdunit=%i\n", pP->DoOutputPlaceDistForOneAdunit);
fprintf(pFILE,"P.OutputPlaceDistAdunit=%i\n", pP->OutputPlaceDistAdunit);
fprintf(pFILE,"P.OutputDensFile=%i\n", pP->OutputDensFile);
fprintf(pFILE,"P.DoOneGen=%i\n", pP->DoOneGen);
fprintf(pFILE,"P.OutputEveryRealisation=%i\n", pP->OutputEveryRealisation);
fprintf(pFILE,"P.BitmapMovieFrame=%i\n", pP->BitmapMovieFrame);
fprintf(pFILE,"P.MaxCorrSample=%i\n", pP->MaxCorrSample);
fprintf(pFILE,"P.DoLatent=%i\n", pP->DoLatent);
fprintf(pFILE,"P.InfQueuePeakLength=%i\n", pP->InfQueuePeakLength);
fprintf(pFILE,"P.NumThreads=%i\n", pP->NumThreads);
fprintf(pFILE,"P.MaxNumThreads=%i\n", pP->MaxNumThreads);
fprintf(pFILE,"P.bwidth=%i\n", pP->bwidth);
fprintf(pFILE,"P.bheight=%i\n", pP->bheight);
fprintf(pFILE,"P.bheight2=%i\n", pP->bheight2);
fprintf(pFILE,"P.bminx=%i\n", pP->bminx);
fprintf(pFILE,"P.bminy=%i\n", pP->bminy);
fprintf(pFILE,"P.OutputBitmap=%i\n", pP->OutputBitmap);
fprintf(pFILE,"P.DoSI=%i\n", pP->DoSI);
fprintf(pFILE,"P.DoHeteroDensity=%i\n", pP->DoHeteroDensity);
fprintf(pFILE,"P.DoPeriodicBoundaries=%i\n", pP->DoPeriodicBoundaries);
fprintf(pFILE,"P.DoImmuneBitmap=%i\n", pP->DoImmuneBitmap);
fprintf(pFILE,"P.OutputBitmapDetected=%i\n", pP->OutputBitmapDetected);
fprintf(pFILE,"P.DoHouseholds=%i\n", pP->DoHouseholds);
fprintf(pFILE,"P.DoPlaces=%i\n", pP->DoPlaces);
fprintf(pFILE,"P.PlaceTypeNum=%i\n", pP->PlaceTypeNum);
fprintf(pFILE,"P.Nplace[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->Nplace[j]);
  if ( ! pP->Nplace[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SmallEpidemicCases=%i\n", pP->SmallEpidemicCases);
fprintf(pFILE,"P.DoPlaceGroupTreat=%i\n", pP->DoPlaceGroupTreat);
fprintf(pFILE,"P.NumInitialInfections[MAX_NUM_SEED_LOCATIONS]=");
for (j = 0; j < MAX_NUM_SEED_LOCATIONS; j++)
  {
  fprintf(pFILE,"  %i", pP->NumInitialInfections[j]);
  if ( ! pP->NumInitialInfections[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.DoRandomInitialInfectionLoc=%i\n", pP->DoRandomInitialInfectionLoc);
fprintf(pFILE,"P.DoAllInitialInfectioninSameLoc=%i\n", pP->DoAllInitialInfectioninSameLoc);
fprintf(pFILE,"P.MinPopDensForInitialInfection=%i\n", pP->MinPopDensForInitialInfection);
fprintf(pFILE,"P.NumSeedLocations=%i\n", pP->NumSeedLocations);
fprintf(pFILE,"P.MaxPopDensForInitialInfection=%i\n", pP->MaxPopDensForInitialInfection);
fprintf(pFILE,"P.InitialInfectionsAdminUnitId[MAX_NUM_SEED_LOCATIONS]=");
for (j = 0; j < MAX_NUM_SEED_LOCATIONS; j++)
  {
  fprintf(pFILE,"  %i", pP->InitialInfectionsAdminUnitId[j]);
  if ( ! pP->InitialInfectionsAdminUnitId[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.InitialInfectionsAdminUnit[MAX_NUM_SEED_LOCATIONS]=");
for (j = 0; j < MAX_NUM_SEED_LOCATIONS; j++)
  {
  fprintf(pFILE,"  %i", pP->InitialInfectionsAdminUnit[j]);
  if ( ! pP->InitialInfectionsAdminUnit[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.DoAge=%i\n", pP->DoAge);
fprintf(pFILE,"P.DoSymptoms=%i\n", pP->DoSymptoms);
fprintf(pFILE,"P.LoadSaveNetwork=%i\n", pP->LoadSaveNetwork);
fprintf(pFILE,"P.IncThreshPop=%i\n", pP->IncThreshPop);
fprintf(pFILE,"P.GlobalIncThreshPop=%i\n", pP->GlobalIncThreshPop);
fprintf(pFILE,"P.OutputOnlyNonExtinct=%i\n", pP->OutputOnlyNonExtinct);
fprintf(pFILE,"P.DoInfectiousnessProfile=%i\n", pP->DoInfectiousnessProfile);
fprintf(pFILE,"P.DoInfectionTree=%i\n", pP->DoInfectionTree);
fprintf(pFILE,"P.DoWholeHouseholdImmunity=%i\n", pP->DoWholeHouseholdImmunity);
fprintf(pFILE,"P.DoSpatial=%i\n", pP->DoSpatial);
fprintf(pFILE,"P.DoDeath=%i\n", pP->DoDeath);
fprintf(pFILE,"P.DoAirports=%i\n", pP->DoAirports);
fprintf(pFILE,"P.Nairports=%i\n", pP->Nairports);
fprintf(pFILE,"P.Air_popscale=%i\n", pP->Air_popscale);
fprintf(pFILE,"P.DoSchoolFile=%i\n", pP->DoSchoolFile);
fprintf(pFILE,"P.DoRealSymptWithdrawal=%i\n", pP->DoRealSymptWithdrawal);
fprintf(pFILE,"P.CaseAbsentChildAgeCutoff=%i\n", pP->CaseAbsentChildAgeCutoff);
fprintf(pFILE,"P.DoEarlyCaseDiagnosis=%i\n", pP->DoEarlyCaseDiagnosis);
fprintf(pFILE,"P.DoInterventionFile=%i\n", pP->DoInterventionFile);
fprintf(pFILE,"P.PlaceTypeNoAirNum=%i\n", pP->PlaceTypeNoAirNum);
fprintf(pFILE,"P.HotelPlaceType=%i\n", pP->HotelPlaceType);
fprintf(pFILE,"P.setupSeed1=%li\n", pP->setupSeed1);
fprintf(pFILE,"P.setupSeed2=%li\n", pP->setupSeed2);
fprintf(pFILE,"P.runSeed1=%li\n", pP->runSeed1);
fprintf(pFILE,"P.runSeed2=%li\n", pP->runSeed2);
fprintf(pFILE,"P.nextSetupSeed1=%li\n", pP->nextSetupSeed1);
fprintf(pFILE,"P.nextSetupSeed2=%li\n", pP->nextSetupSeed2);
fprintf(pFILE,"P.nextRunSeed1=%li\n", pP->nextRunSeed1);
fprintf(pFILE,"P.nextRunSeed2=%li\n", pP->nextRunSeed2);
fprintf(pFILE,"P.ResetSeeds=%i\n", pP->ResetSeeds);
fprintf(pFILE,"P.KeepSameSeeds=%i\n", pP->KeepSameSeeds);
fprintf(pFILE,"P.ResetSeedsPostIntervention=%i\n", pP->ResetSeedsPostIntervention);
fprintf(pFILE,"P.ResetSeedsFlag=%i\n", pP->ResetSeedsFlag);
fprintf(pFILE,"P.TimeToResetSeeds=%i\n", pP->TimeToResetSeeds);
fprintf(pFILE,"P.SpatialBoundingBox[4]=");
for (j = 0; j < 4; j++)
  {
  fprintf(pFILE,"  %f", pP->SpatialBoundingBox[j]);
  if ( ! pP->SpatialBoundingBox[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.LocationInitialInfection[MAX_NUM_SEED_LOCATIONS][2]=");
for (i = 0; i < MAX_NUM_SEED_LOCATIONS; i++)
  {
  for (j = 0; j < 2; j++)
    {
    fprintf(pFILE,"  %f", pP->LocationInitialInfection[i][j]);
    if ( ! pP->LocationInitialInfection[i][j]) break;
    }
  if ( ! pP->LocationInitialInfection[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.InitialInfectionsAdminUnitWeight[MAX_NUM_SEED_LOCATIONS]=");
for (j = 0; j < MAX_NUM_SEED_LOCATIONS; j++)
  {
  fprintf(pFILE,"  %f", pP->InitialInfectionsAdminUnitWeight[j]);
  if ( ! pP->InitialInfectionsAdminUnitWeight[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.TimeStepsPerDay=%f\n", pP->TimeStepsPerDay);
fprintf(pFILE,"P.FalsePositiveRate=%f\n", pP->FalsePositiveRate);
fprintf(pFILE,"P.FalsePositivePerCapitaIncidence=%f\n", pP->FalsePositivePerCapitaIncidence);
fprintf(pFILE,"P.FalsePositiveAgeRate[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->FalsePositiveAgeRate[j]);
  if ( ! pP->FalsePositiveAgeRate[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.latent_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->latent_icdf[j]);
  if ( ! pP->latent_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.infectious_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->infectious_icdf[j]);
  if ( ! pP->infectious_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.infectious_prof[INFPROF_RES+1]=");
for (j = 0; j < INFPROF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->infectious_prof[j]);
  if ( ! pP->infectious_prof[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.infectiousness[MAX_INFECTIOUS_STEPS]=");
for (j = 0; j < MAX_INFECTIOUS_STEPS; j++)
  {
  fprintf(pFILE,"  %f", pP->infectiousness[j]);
  if ( ! pP->infectiousness[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.MildToRecovery_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->MildToRecovery_icdf[j]);
  if ( ! pP->MildToRecovery_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.ILIToRecovery_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->ILIToRecovery_icdf[j]);
  if ( ! pP->ILIToRecovery_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SARIToRecovery_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->SARIToRecovery_icdf[j]);
  if ( ! pP->SARIToRecovery_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CriticalToCritRecov_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->CriticalToCritRecov_icdf[j]);
  if ( ! pP->CriticalToCritRecov_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CritRecovToRecov_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->CritRecovToRecov_icdf[j]);
  if ( ! pP->CritRecovToRecov_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.ILIToSARI_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->ILIToSARI_icdf[j]);
  if ( ! pP->ILIToSARI_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SARIToCritical_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->SARIToCritical_icdf[j]);
  if ( ! pP->SARIToCritical_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.ILIToDeath_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->ILIToDeath_icdf[j]);
  if ( ! pP->ILIToDeath_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SARIToDeath_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->SARIToDeath_icdf[j]);
  if ( ! pP->SARIToDeath_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CriticalToDeath_icdf[CDF_RES+1]=");
for (j = 0; j < CDF_RES+1; j++)
  {
  fprintf(pFILE,"  %f", pP->CriticalToDeath_icdf[j]);
  if ( ! pP->CriticalToDeath_icdf[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Mean_MildToRecovery=%f\n", pP->Mean_MildToRecovery);
fprintf(pFILE,"P.Mean_ILIToRecovery=%f\n", pP->Mean_ILIToRecovery);
fprintf(pFILE,"P.Mean_SARIToRecovery=%f\n", pP->Mean_SARIToRecovery);
fprintf(pFILE,"P.Mean_CriticalToCritRecov=%f\n", pP->Mean_CriticalToCritRecov);
fprintf(pFILE,"P.Mean_CritRecovToRecov=%f\n", pP->Mean_CritRecovToRecov);
fprintf(pFILE,"P.Mean_TimeToTest=%f\n", pP->Mean_TimeToTest);
fprintf(pFILE,"P.Mean_TimeToTestOffset=%f\n", pP->Mean_TimeToTestOffset);
fprintf(pFILE,"P.Mean_TimeToTestCriticalOffset=%f\n", pP->Mean_TimeToTestCriticalOffset);
fprintf(pFILE,"P.Mean_TimeToTestCritRecovOffset=%f\n", pP->Mean_TimeToTestCritRecovOffset);
fprintf(pFILE,"P.Mean_ILIToSARI=%f\n", pP->Mean_ILIToSARI);
fprintf(pFILE,"P.Mean_SARIToCritical=%f\n", pP->Mean_SARIToCritical);
fprintf(pFILE,"P.Mean_CriticalToDeath=%f\n", pP->Mean_CriticalToDeath);
fprintf(pFILE,"P.Mean_SARIToDeath=%f\n", pP->Mean_SARIToDeath);
fprintf(pFILE,"P.Mean_ILIToDeath=%f\n", pP->Mean_ILIToDeath);
fprintf(pFILE,"P.Prop_Mild_ByAge[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->Prop_Mild_ByAge[j]);
  if ( ! pP->Prop_Mild_ByAge[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Prop_ILI_ByAge[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->Prop_ILI_ByAge[j]);
  if ( ! pP->Prop_ILI_ByAge[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Prop_SARI_ByAge[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->Prop_SARI_ByAge[j]);
  if ( ! pP->Prop_SARI_ByAge[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Prop_Critical_ByAge[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->Prop_Critical_ByAge[j]);
  if ( ! pP->Prop_Critical_ByAge[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CFR_SARI_ByAge[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->CFR_SARI_ByAge[j]);
  if ( ! pP->CFR_SARI_ByAge[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CFR_Critical_ByAge[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->CFR_Critical_ByAge[j]);
  if ( ! pP->CFR_Critical_ByAge[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CFR_ILI_ByAge[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->CFR_ILI_ByAge[j]);
  if ( ! pP->CFR_ILI_ByAge[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.TimeStep=%f\n", pP->TimeStep);
fprintf(pFILE,"P.SampleTime=%f\n", pP->SampleTime);
fprintf(pFILE,"P.SampleStep=%f\n", pP->SampleStep);
fprintf(pFILE,"P.BitmapAspectScale=%f\n", pP->BitmapAspectScale);
fprintf(pFILE,"P.ts_age=%i\n", pP->ts_age);
fprintf(pFILE,"P.DoSeverity=%i\n", pP->DoSeverity);
fprintf(pFILE,"P.scalex=%f\n", pP->scalex);
fprintf(pFILE,"P.scaley=%f\n", pP->scaley);
fprintf(pFILE,"P.width=%f\n", pP->width);
fprintf(pFILE,"P.height=%f\n", pP->height);
fprintf(pFILE,"P.cwidth=%f\n", pP->cwidth);
fprintf(pFILE,"P.cheight=%f\n", pP->cheight);
fprintf(pFILE,"P.mcwidth=%f\n", pP->mcwidth);
fprintf(pFILE,"P.mcheight=%f\n", pP->mcheight);
fprintf(pFILE,"P.KernelShape=%f\n", pP->KernelShape);
fprintf(pFILE,"P.KernelScale=%f\n", pP->KernelScale);
fprintf(pFILE,"P.KernelP3=%f\n", pP->KernelP3);
fprintf(pFILE,"P.KernelP4=%f\n", pP->KernelP4);
fprintf(pFILE,"P.KernelDelta=%f\n", pP->KernelDelta);
fprintf(pFILE,"P.MoveKernelShape=%f\n", pP->MoveKernelShape);
fprintf(pFILE,"P.MoveKernelScale=%f\n", pP->MoveKernelScale);
fprintf(pFILE,"P.MoveKernelP3=%f\n", pP->MoveKernelP3);
fprintf(pFILE,"P.MoveKernelP4=%f\n", pP->MoveKernelP4);
fprintf(pFILE,"P.AirportKernelShape=%f\n", pP->AirportKernelShape);
fprintf(pFILE,"P.AirportKernelScale=%f\n", pP->AirportKernelScale);
fprintf(pFILE,"P.AirportKernelP3=%f\n", pP->AirportKernelP3);
fprintf(pFILE,"P.AirportKernelP4=%f\n", pP->AirportKernelP4);
fprintf(pFILE,"P.AirportTrafficScale=%f\n", pP->AirportTrafficScale);
fprintf(pFILE,"P.R0=%f\n", pP->R0);
fprintf(pFILE,"P.R0scale=%f\n", pP->R0scale);
fprintf(pFILE,"P.LocalBeta=%f\n", pP->LocalBeta);
fprintf(pFILE,"P.LatentPeriod=%f\n", pP->LatentPeriod);
fprintf(pFILE,"P.InfectiousPeriod=%f\n", pP->InfectiousPeriod);
fprintf(pFILE,"P.R0household=%f\n", pP->R0household);
fprintf(pFILE,"P.R0places=%f\n", pP->R0places);
fprintf(pFILE,"P.R0spatial=%f\n", pP->R0spatial);
fprintf(pFILE,"P.Seasonality[DAYS_PER_YEAR]=");
for (j = 0; j < DAYS_PER_YEAR; j++)
  {
  fprintf(pFILE,"  %f", pP->Seasonality[j]);
  if ( ! pP->Seasonality[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.InfectiousnessSD=%f\n", pP->InfectiousnessSD);
fprintf(pFILE,"P.R0DensityScalePower=%f\n", pP->R0DensityScalePower);
fprintf(pFILE,"P.InfectiousnessGamA=%f\n", pP->InfectiousnessGamA);
fprintf(pFILE,"P.InfectiousnessGamR=%f\n", pP->InfectiousnessGamR);
fprintf(pFILE,"P.ProportionSymptomatic[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->ProportionSymptomatic[j]);
  if ( ! pP->ProportionSymptomatic[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.LatentToSymptDelay=%f\n", pP->LatentToSymptDelay);
fprintf(pFILE,"P.SymptInfectiousness=%f\n", pP->SymptInfectiousness);
fprintf(pFILE,"P.SymptSpatialContactRate=%f\n", pP->SymptSpatialContactRate);
fprintf(pFILE,"P.SymptPlaceTypeContactRate[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->SymptPlaceTypeContactRate[j]);
  if ( ! pP->SymptPlaceTypeContactRate[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.InhibitInterAdunitPlaceAssignment[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->InhibitInterAdunitPlaceAssignment[j]);
  if ( ! pP->InhibitInterAdunitPlaceAssignment[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SymptPlaceTypeWithdrawalProp[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->SymptPlaceTypeWithdrawalProp[j]);
  if ( ! pP->SymptPlaceTypeWithdrawalProp[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CaseAbsenteeismDuration=%f\n", pP->CaseAbsenteeismDuration);
fprintf(pFILE,"P.CaseAbsenteeismDelay=%f\n", pP->CaseAbsenteeismDelay);
fprintf(pFILE,"P.PlaceCloseRoundHousehold=%i\n", pP->PlaceCloseRoundHousehold);
fprintf(pFILE,"P.AbsenteeismPlaceClosure=%i\n", pP->AbsenteeismPlaceClosure);
fprintf(pFILE,"P.MaxAbsentTime=%i\n", pP->MaxAbsentTime);
fprintf(pFILE,"P.CaseAbsentChildPropAdultCarers=%f\n", pP->CaseAbsentChildPropAdultCarers);
fprintf(pFILE,"P.RelativeTravelRate[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->RelativeTravelRate[j]);
  if ( ! pP->RelativeTravelRate[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.RelativeSpatialContact[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->RelativeSpatialContact[j]);
  if ( ! pP->RelativeSpatialContact[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.AgeSusceptibility[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->AgeSusceptibility[j]);
  if ( ! pP->AgeSusceptibility[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.AgeInfectiousness[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->AgeInfectiousness[j]);
  if ( ! pP->AgeInfectiousness[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.InitialImmunity[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->InitialImmunity[j]);
  if ( ! pP->InitialImmunity[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.WAIFW_Matrix[NUM_AGE_GROUPS][NUM_AGE_GROUPS]=");
for (i = 0; i < NUM_AGE_GROUPS; i++)
  {
  for (j = 0; j < NUM_AGE_GROUPS; j++)
    {
    fprintf(pFILE,"  %f", pP->WAIFW_Matrix[i][j]);
    if ( ! pP->WAIFW_Matrix[i][j]) break;
    }
  if ( ! pP->WAIFW_Matrix[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HotelPropLocal=%f\n", pP->HotelPropLocal);
fprintf(pFILE,"P.JourneyDurationDistrib[MAX_TRAVEL_TIME]=");
for (j = 0; j < MAX_TRAVEL_TIME; j++)
  {
  fprintf(pFILE,"  %f", pP->JourneyDurationDistrib[j]);
  if ( ! pP->JourneyDurationDistrib[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.LocalJourneyDurationDistrib[MAX_TRAVEL_TIME]=");
for (j = 0; j < MAX_TRAVEL_TIME; j++)
  {
  fprintf(pFILE,"  %f", pP->LocalJourneyDurationDistrib[j]);
  if ( ! pP->LocalJourneyDurationDistrib[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.MeanJourneyTime=%f\n", pP->MeanJourneyTime);
fprintf(pFILE,"P.MeanLocalJourneyTime=%f\n", pP->MeanLocalJourneyTime);
fprintf(pFILE,"P.InvJourneyDurationDistrib[1025]=");
for (j = 0; j < 1025; j++)
  {
  fprintf(pFILE,"  %i", pP->InvJourneyDurationDistrib[j]);
  if ( ! pP->InvJourneyDurationDistrib[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.InvLocalJourneyDurationDistrib[1025]=");
for (j = 0; j < 1025; j++)
  {
  fprintf(pFILE,"  %i", pP->InvLocalJourneyDurationDistrib[j]);
  if ( ! pP->InvLocalJourneyDurationDistrib[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HouseholdTrans=%f\n", pP->HouseholdTrans);
fprintf(pFILE,"P.HouseholdSizeDistrib[MAX_ADUNITS][MAX_HOUSEHOLD_SIZE]=");
for (i = 0; i < MAX_ADUNITS; i++)
  {
  for (j = 0; j < MAX_HOUSEHOLD_SIZE; j++)
    {
    fprintf(pFILE,"  %f", pP->HouseholdSizeDistrib[i][j]);
    if ( ! pP->HouseholdSizeDistrib[i][j]) break;
    }
  if ( ! pP->HouseholdSizeDistrib[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HouseholdTransPow=%f\n", pP->HouseholdTransPow);
fprintf(pFILE,"P.HouseholdDenomLookup[MAX_HOUSEHOLD_SIZE]=");
for (j = 0; j < MAX_HOUSEHOLD_SIZE; j++)
  {
  fprintf(pFILE,"  %f", pP->HouseholdDenomLookup[j]);
  if ( ! pP->HouseholdDenomLookup[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeAgeMin[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceTypeAgeMin[j]);
  if ( ! pP->PlaceTypeAgeMin[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeAgeMax[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceTypeAgeMax[j]);
  if ( ! pP->PlaceTypeAgeMax[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeMaxAgeRead[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceTypeMaxAgeRead[j]);
  if ( ! pP->PlaceTypeMaxAgeRead[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeAgeMin2[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceTypeAgeMin2[j]);
  if ( ! pP->PlaceTypeAgeMin2[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeAgeMax2[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceTypeAgeMax2[j]);
  if ( ! pP->PlaceTypeAgeMax2[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeAgeMin3[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceTypeAgeMin3[j]);
  if ( ! pP->PlaceTypeAgeMin3[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeAgeMax3[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceTypeAgeMax3[j]);
  if ( ! pP->PlaceTypeAgeMax3[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeNearestNeighb[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceTypeNearestNeighb[j]);
  if ( ! pP->PlaceTypeNearestNeighb[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeKernelType[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceTypeKernelType[j]);
  if ( ! pP->PlaceTypeKernelType[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypePropAgeGroup[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypePropAgeGroup[j]);
  if ( ! pP->PlaceTypePropAgeGroup[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypePropAgeGroup2[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypePropAgeGroup2[j]);
  if ( ! pP->PlaceTypePropAgeGroup2[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypePropAgeGroup3[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypePropAgeGroup3[j]);
  if ( ! pP->PlaceTypePropAgeGroup3[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeKernelShape[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeKernelShape[j]);
  if ( ! pP->PlaceTypeKernelShape[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeKernelScale[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeKernelScale[j]);
  if ( ! pP->PlaceTypeKernelScale[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeKernelP3[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeKernelP3[j]);
  if ( ! pP->PlaceTypeKernelP3[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeKernelP4[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeKernelP4[j]);
  if ( ! pP->PlaceTypeKernelP4[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeTrans[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeTrans[j]);
  if ( ! pP->PlaceTypeTrans[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeMeanSize[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeMeanSize[j]);
  if ( ! pP->PlaceTypeMeanSize[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypePropBetweenGroupLinks[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypePropBetweenGroupLinks[j]);
  if ( ! pP->PlaceTypePropBetweenGroupLinks[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeSizeSD[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeSizeSD[j]);
  if ( ! pP->PlaceTypeSizeSD[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeSizePower[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeSizePower[j]);
  if ( ! pP->PlaceTypeSizePower[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeSizeOffset[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeSizeOffset[j]);
  if ( ! pP->PlaceTypeSizeOffset[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeSizeMax[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeSizeMax[j]);
  if ( ! pP->PlaceTypeSizeMax[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceTypeGroupSizeParam1[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceTypeGroupSizeParam1[j]);
  if ( ! pP->PlaceTypeGroupSizeParam1[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceExclusivityMatrix[NUM_PLACE_TYPES*NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES*NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceExclusivityMatrix[j]);
  if ( ! pP->PlaceExclusivityMatrix[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PropAgeGroup[MAX_ADUNITS][NUM_AGE_GROUPS]=");
for (i = 0; i < MAX_ADUNITS; i++)
  {
  for (j = 0; j < NUM_AGE_GROUPS; j++)
    {
    fprintf(pFILE,"  %f", pP->PropAgeGroup[i][j]);
    if ( ! pP->PropAgeGroup[i][j]) break;
    }
  if ( ! pP->PropAgeGroup[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PopByAdunit[MAX_ADUNITS][2]=");
for (i = 0; i < MAX_ADUNITS; i++)
  {
  for (j = 0; j < 2; j++)
    {
    fprintf(pFILE,"  %f", pP->PopByAdunit[i][j]);
    if ( ! pP->PopByAdunit[i][j]) break;
    }
  if ( ! pP->PopByAdunit[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.MeanAnnualDeathRate=%f\n", pP->MeanAnnualDeathRate);
fprintf(pFILE,"P.InvLifeExpecDist[MAX_ADUNITS][1001]=");
for (i = 0; i < MAX_ADUNITS; i++)
  {
  for (j = 0; j < 1001; j++)
    {
    fprintf(pFILE,"  %f", pP->InvLifeExpecDist[i][j]);
    if ( ! pP->InvLifeExpecDist[i][j]) break;
    }
  if ( ! pP->InvLifeExpecDist[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceCloseTimeStart=%f\n", pP->PlaceCloseTimeStart);
fprintf(pFILE,"P.PlaceCloseTimeStart2=%f\n", pP->PlaceCloseTimeStart2);
fprintf(pFILE,"P.PlaceCloseDurationBase=%f\n", pP->PlaceCloseDurationBase);
fprintf(pFILE,"P.PlaceCloseDuration=%f\n", pP->PlaceCloseDuration);
fprintf(pFILE,"P.PlaceCloseDuration2=%f\n", pP->PlaceCloseDuration2);
fprintf(pFILE,"P.PlaceCloseDelayMean=%f\n", pP->PlaceCloseDelayMean);
fprintf(pFILE,"P.PlaceCloseRadius=%f\n", pP->PlaceCloseRadius);
fprintf(pFILE,"P.PlaceCloseRadius2=%f\n", pP->PlaceCloseRadius2);
fprintf(pFILE,"P.PlaceCloseEffect[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceCloseEffect[j]);
  if ( ! pP->PlaceCloseEffect[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceClosePropAttending[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->PlaceClosePropAttending[j]);
  if ( ! pP->PlaceClosePropAttending[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceCloseSpatialRelContact=%f\n", pP->PlaceCloseSpatialRelContact);
fprintf(pFILE,"P.PlaceCloseHouseholdRelContact=%f\n", pP->PlaceCloseHouseholdRelContact);
fprintf(pFILE,"P.PlaceCloseCasePropThresh=%f\n", pP->PlaceCloseCasePropThresh);
fprintf(pFILE,"P.PlaceCloseAdunitPropThresh=%f\n", pP->PlaceCloseAdunitPropThresh);
fprintf(pFILE,"P.PlaceCloseFracIncTrig=%f\n", pP->PlaceCloseFracIncTrig);
fprintf(pFILE,"P.DoHolidays=%i\n", pP->DoHolidays);
fprintf(pFILE,"P.NumHolidays=%i\n", pP->NumHolidays);
fprintf(pFILE,"P.HolidayEffect[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->HolidayEffect[j]);
  if ( ! pP->HolidayEffect[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HolidayStartTime[DAYS_PER_YEAR]=");
for (j = 0; j < DAYS_PER_YEAR; j++)
  {
  fprintf(pFILE,"  %f", pP->HolidayStartTime[j]);
  if ( ! pP->HolidayStartTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HolidayDuration[DAYS_PER_YEAR]=");
for (j = 0; j < DAYS_PER_YEAR; j++)
  {
  fprintf(pFILE,"  %f", pP->HolidayDuration[j]);
  if ( ! pP->HolidayDuration[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.ColourPeriod=%f\n", pP->ColourPeriod);
fprintf(pFILE,"P.BoundingBox[4]=");
for (j = 0; j < 4; j++)
  {
  fprintf(pFILE,"  %f", pP->BoundingBox[j]);
  if ( ! pP->BoundingBox[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.BitmapScale=%f\n", pP->BitmapScale);
fprintf(pFILE,"P.TreatSuscDrop=%f\n", pP->TreatSuscDrop);
fprintf(pFILE,"P.TreatInfDrop=%f\n", pP->TreatInfDrop);
fprintf(pFILE,"P.TreatDeathDrop=%f\n", pP->TreatDeathDrop);
fprintf(pFILE,"P.TreatSympDrop=%f\n", pP->TreatSympDrop);
fprintf(pFILE,"P.TreatDelayMean=%f\n", pP->TreatDelayMean);
fprintf(pFILE,"P.TreatTimeStart=%f\n", pP->TreatTimeStart);
fprintf(pFILE,"P.TreatPlaceGeogDuration=%f\n", pP->TreatPlaceGeogDuration);
fprintf(pFILE,"P.TreatProphCourseLength=%f\n", pP->TreatProphCourseLength);
fprintf(pFILE,"P.TreatCaseCourseLength=%f\n", pP->TreatCaseCourseLength);
fprintf(pFILE,"P.TreatPropRadial=%f\n", pP->TreatPropRadial);
fprintf(pFILE,"P.TreatRadius=%f\n", pP->TreatRadius);
fprintf(pFILE,"P.TreatRadius2=%f\n", pP->TreatRadius2);
fprintf(pFILE,"P.TreatCellIncThresh=%f\n", pP->TreatCellIncThresh);
fprintf(pFILE,"P.CaseIsolation_CellIncThresh=%f\n", pP->CaseIsolation_CellIncThresh);
fprintf(pFILE,"P.HHQuar_CellIncThresh=%f\n", pP->HHQuar_CellIncThresh);
fprintf(pFILE,"P.DigitalContactTracing_CellIncThresh=%f\n", pP->DigitalContactTracing_CellIncThresh);
fprintf(pFILE,"P.TreatPropCases=%f\n", pP->TreatPropCases);
fprintf(pFILE,"P.TreatPropCaseHouseholds=%f\n", pP->TreatPropCaseHouseholds);
fprintf(pFILE,"P.TreatHouseholdsDuration=%f\n", pP->TreatHouseholdsDuration);
fprintf(pFILE,"P.TreatPlaceProbCaseId[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->TreatPlaceProbCaseId[j]);
  if ( ! pP->TreatPlaceProbCaseId[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.TreatPlaceTotalProp[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->TreatPlaceTotalProp[j]);
  if ( ! pP->TreatPlaceTotalProp[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.TreatMaxCoursesBase=%f\n", pP->TreatMaxCoursesBase);
fprintf(pFILE,"P.TreatNewCoursesRate=%f\n", pP->TreatNewCoursesRate);
fprintf(pFILE,"P.TreatNewCoursesStartTime=%f\n", pP->TreatNewCoursesStartTime);
fprintf(pFILE,"P.TreatMaxCourses=%f\n", pP->TreatMaxCourses);
fprintf(pFILE,"P.VaccSuscDrop=%f\n", pP->VaccSuscDrop);
fprintf(pFILE,"P.VaccSuscDrop2=%f\n", pP->VaccSuscDrop2);
fprintf(pFILE,"P.VaccInfDrop=%f\n", pP->VaccInfDrop);
fprintf(pFILE,"P.VaccMortDrop=%f\n", pP->VaccMortDrop);
fprintf(pFILE,"P.VaccSympDrop=%f\n", pP->VaccSympDrop);
fprintf(pFILE,"P.VaccDelayMean=%f\n", pP->VaccDelayMean);
fprintf(pFILE,"P.VaccTimeStart=%f\n", pP->VaccTimeStart);
fprintf(pFILE,"P.VaccTimeEfficacySwitch=%f\n", pP->VaccTimeEfficacySwitch);
fprintf(pFILE,"P.VaccTimeStartGeo=%f\n", pP->VaccTimeStartGeo);
fprintf(pFILE,"P.VaccTimeToEfficacy=%f\n", pP->VaccTimeToEfficacy);
fprintf(pFILE,"P.VaccProp=%f\n", pP->VaccProp);
fprintf(pFILE,"P.VaccRadius=%f\n", pP->VaccRadius);
fprintf(pFILE,"P.VaccRadius2=%f\n", pP->VaccRadius2);
fprintf(pFILE,"P.VaccMinRadius=%f\n", pP->VaccMinRadius);
fprintf(pFILE,"P.VaccMinRadius2=%f\n", pP->VaccMinRadius2);
fprintf(pFILE,"P.VaccPropCaseHouseholds=%f\n", pP->VaccPropCaseHouseholds);
fprintf(pFILE,"P.VaccHouseholdsDuration=%f\n", pP->VaccHouseholdsDuration);
fprintf(pFILE,"P.VaccMaxCoursesBase=%f\n", pP->VaccMaxCoursesBase);
fprintf(pFILE,"P.VaccNewCoursesRate=%f\n", pP->VaccNewCoursesRate);
fprintf(pFILE,"P.VaccNewCoursesStartTime=%f\n", pP->VaccNewCoursesStartTime);
fprintf(pFILE,"P.VaccMaxCourses=%f\n", pP->VaccMaxCourses);
fprintf(pFILE,"P.VaccNewCoursesEndTime=%f\n", pP->VaccNewCoursesEndTime);
fprintf(pFILE,"P.VaccEfficacyDecay=%f\n", pP->VaccEfficacyDecay);
fprintf(pFILE,"P.VaccCellIncThresh=%f\n", pP->VaccCellIncThresh);
fprintf(pFILE,"P.VaccCampaignInterval=%f\n", pP->VaccCampaignInterval);
fprintf(pFILE,"P.VaccCoverageIncreasePeriod=%f\n", pP->VaccCoverageIncreasePeriod);
fprintf(pFILE,"P.VaccDosePerDay=%i\n", pP->VaccDosePerDay);
fprintf(pFILE,"P.PreAlertControlPropCasesId=%f\n", pP->PreAlertControlPropCasesId);
fprintf(pFILE,"P.PostAlertControlPropCasesId=%f\n", pP->PostAlertControlPropCasesId);
fprintf(pFILE,"P.ControlPropCasesId=%f\n", pP->ControlPropCasesId);
fprintf(pFILE,"P.MoveRestrRadius=%f\n", pP->MoveRestrRadius);
fprintf(pFILE,"P.MoveRestrRadius2=%f\n", pP->MoveRestrRadius2);
fprintf(pFILE,"P.MoveDelayMean=%f\n", pP->MoveDelayMean);
fprintf(pFILE,"P.MoveRestrEffect=%f\n", pP->MoveRestrEffect);
fprintf(pFILE,"P.MoveRestrDuration=%f\n", pP->MoveRestrDuration);
fprintf(pFILE,"P.MoveRestrTimeStart=%f\n", pP->MoveRestrTimeStart);
fprintf(pFILE,"P.AirportCloseTimeStart=%f\n", pP->AirportCloseTimeStart);
fprintf(pFILE,"P.AirportCloseDuration=%f\n", pP->AirportCloseDuration);
fprintf(pFILE,"P.AirportCloseEffectiveness=%f\n", pP->AirportCloseEffectiveness);
fprintf(pFILE,"P.CaseIsolationTimeStart=%f\n", pP->CaseIsolationTimeStart);
fprintf(pFILE,"P.CaseIsolationDuration=%f\n", pP->CaseIsolationDuration);
fprintf(pFILE,"P.CaseIsolationEffectiveness=%f\n", pP->CaseIsolationEffectiveness);
fprintf(pFILE,"P.CaseIsolationHouseEffectiveness=%f\n", pP->CaseIsolationHouseEffectiveness);
fprintf(pFILE,"P.CaseIsolationDelay=%f\n", pP->CaseIsolationDelay);
fprintf(pFILE,"P.CaseIsolationPolicyDuration=%f\n", pP->CaseIsolationPolicyDuration);
fprintf(pFILE,"P.CaseIsolationProp=%f\n", pP->CaseIsolationProp);
fprintf(pFILE,"P.HQuarantineTimeStart=%f\n", pP->HQuarantineTimeStart);
fprintf(pFILE,"P.HQuarantineHouseDelay=%f\n", pP->HQuarantineHouseDelay);
fprintf(pFILE,"P.HQuarantineHouseDuration=%f\n", pP->HQuarantineHouseDuration);
fprintf(pFILE,"P.HQuarantinePolicyDuration=%f\n", pP->HQuarantinePolicyDuration);
fprintf(pFILE,"P.HQuarantinePropIndivCompliant=%f\n", pP->HQuarantinePropIndivCompliant);
fprintf(pFILE,"P.HQuarantinePropHouseCompliant=%f\n", pP->HQuarantinePropHouseCompliant);
fprintf(pFILE,"P.HQuarantinePlaceEffect[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->HQuarantinePlaceEffect[j]);
  if ( ! pP->HQuarantinePlaceEffect[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HQuarantineSpatialEffect=%f\n", pP->HQuarantineSpatialEffect);
fprintf(pFILE,"P.HQuarantineHouseEffect=%f\n", pP->HQuarantineHouseEffect);
fprintf(pFILE,"P.EnhancedSocDistClusterByHousehold=%i\n", pP->EnhancedSocDistClusterByHousehold);
fprintf(pFILE,"P.SocDistTimeStart=%f\n", pP->SocDistTimeStart);
fprintf(pFILE,"P.SocDistDuration=%f\n", pP->SocDistDuration);
fprintf(pFILE,"P.SocDistHouseholdEffect=%f\n", pP->SocDistHouseholdEffect);
fprintf(pFILE,"P.SocDistPlaceEffect[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->SocDistPlaceEffect[j]);
  if ( ! pP->SocDistPlaceEffect[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SocDistSpatialEffect=%f\n", pP->SocDistSpatialEffect);
fprintf(pFILE,"P.EnhancedSocDistHouseholdEffect=%f\n", pP->EnhancedSocDistHouseholdEffect);
fprintf(pFILE,"P.EnhancedSocDistPlaceEffect[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->EnhancedSocDistPlaceEffect[j]);
  if ( ! pP->EnhancedSocDistPlaceEffect[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.EnhancedSocDistSpatialEffect=%f\n", pP->EnhancedSocDistSpatialEffect);
fprintf(pFILE,"P.EnhancedSocDistProportionCompliant[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->EnhancedSocDistProportionCompliant[j]);
  if ( ! pP->EnhancedSocDistProportionCompliant[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SocDistChangeDelay=%f\n", pP->SocDistChangeDelay);
fprintf(pFILE,"P.SocDistDuration2=%f\n", pP->SocDistDuration2);
fprintf(pFILE,"P.SocDistHouseholdEffect2=%f\n", pP->SocDistHouseholdEffect2);
fprintf(pFILE,"P.SocDistPlaceEffect2[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->SocDistPlaceEffect2[j]);
  if ( ! pP->SocDistPlaceEffect2[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SocDistSpatialEffect2=%f\n", pP->SocDistSpatialEffect2);
fprintf(pFILE,"P.EnhancedSocDistHouseholdEffect2=%f\n", pP->EnhancedSocDistHouseholdEffect2);
fprintf(pFILE,"P.EnhancedSocDistPlaceEffect2[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->EnhancedSocDistPlaceEffect2[j]);
  if ( ! pP->EnhancedSocDistPlaceEffect2[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.EnhancedSocDistSpatialEffect2=%f\n", pP->EnhancedSocDistSpatialEffect2);
fprintf(pFILE,"P.SocDistDurationCurrent=%f\n", pP->SocDistDurationCurrent);
fprintf(pFILE,"P.SocDistHouseholdEffectCurrent=%f\n", pP->SocDistHouseholdEffectCurrent);
fprintf(pFILE,"P.SocDistPlaceEffectCurrent[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->SocDistPlaceEffectCurrent[j]);
  if ( ! pP->SocDistPlaceEffectCurrent[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SocDistSpatialEffectCurrent=%f\n", pP->SocDistSpatialEffectCurrent);
fprintf(pFILE,"P.EnhancedSocDistHouseholdEffectCurrent=%f\n", pP->EnhancedSocDistHouseholdEffectCurrent);
fprintf(pFILE,"P.EnhancedSocDistPlaceEffectCurrent[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->EnhancedSocDistPlaceEffectCurrent[j]);
  if ( ! pP->EnhancedSocDistPlaceEffectCurrent[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.EnhancedSocDistSpatialEffectCurrent=%f\n", pP->EnhancedSocDistSpatialEffectCurrent);
fprintf(pFILE,"P.SocDistRadius=%f\n", pP->SocDistRadius);
fprintf(pFILE,"P.SocDistRadius2=%f\n", pP->SocDistRadius2);
fprintf(pFILE,"P.VaryEfficaciesOverTime=%i\n", pP->VaryEfficaciesOverTime);
fprintf(pFILE,"P.Num_SD_ChangeTimes=%i\n", pP->Num_SD_ChangeTimes);
fprintf(pFILE,"P.SD_ChangeTimes[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %i", pP->SD_ChangeTimes[j]);
  if ( ! pP->SD_ChangeTimes[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SD_SpatialEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->SD_SpatialEffects_OverTime[j]);
  if ( ! pP->SD_SpatialEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SD_HouseholdEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->SD_HouseholdEffects_OverTime[j]);
  if ( ! pP->SD_HouseholdEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SD_PlaceEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]=");
for (i = 0; i < MAX_NUM_INTERVENTION_CHANGE_TIMES; i++)
  {
  for (j = 0; j < NUM_PLACE_TYPES; j++)
    {
    fprintf(pFILE,"  %f", pP->SD_PlaceEffects_OverTime[i][j]);
    if ( ! pP->SD_PlaceEffects_OverTime[i][j]) break;
    }
  if ( ! pP->SD_PlaceEffects_OverTime[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.SD_CellIncThresh_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %i", pP->SD_CellIncThresh_OverTime[j]);
  if ( ! pP->SD_CellIncThresh_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Enhanced_SD_SpatialEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->Enhanced_SD_SpatialEffects_OverTime[j]);
  if ( ! pP->Enhanced_SD_SpatialEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Enhanced_SD_HouseholdEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->Enhanced_SD_HouseholdEffects_OverTime[j]);
  if ( ! pP->Enhanced_SD_HouseholdEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Enhanced_SD_PlaceEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]=");
for (i = 0; i < MAX_NUM_INTERVENTION_CHANGE_TIMES; i++)
  {
  for (j = 0; j < NUM_PLACE_TYPES; j++)
    {
    fprintf(pFILE,"  %f", pP->Enhanced_SD_PlaceEffects_OverTime[i][j]);
    if ( ! pP->Enhanced_SD_PlaceEffects_OverTime[i][j]) break;
    }
  if ( ! pP->Enhanced_SD_PlaceEffects_OverTime[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Num_CI_ChangeTimes=%i\n", pP->Num_CI_ChangeTimes);
fprintf(pFILE,"P.CI_ChangeTimes[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %i", pP->CI_ChangeTimes[j]);
  if ( ! pP->CI_ChangeTimes[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CI_SpatialAndPlaceEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->CI_SpatialAndPlaceEffects_OverTime[j]);
  if ( ! pP->CI_SpatialAndPlaceEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CI_HouseholdEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->CI_HouseholdEffects_OverTime[j]);
  if ( ! pP->CI_HouseholdEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CI_Prop_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->CI_Prop_OverTime[j]);
  if ( ! pP->CI_Prop_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.CI_CellIncThresh_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->CI_CellIncThresh_OverTime[j]);
  if ( ! pP->CI_CellIncThresh_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Num_HQ_ChangeTimes=%i\n", pP->Num_HQ_ChangeTimes);
fprintf(pFILE,"P.HQ_ChangeTimes[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %i", pP->HQ_ChangeTimes[j]);
  if ( ! pP->HQ_ChangeTimes[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HQ_SpatialEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->HQ_SpatialEffects_OverTime[j]);
  if ( ! pP->HQ_SpatialEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HQ_HouseholdEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->HQ_HouseholdEffects_OverTime[j]);
  if ( ! pP->HQ_HouseholdEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HQ_PlaceEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]=");
for (i = 0; i < MAX_NUM_INTERVENTION_CHANGE_TIMES; i++)
  {
  for (j = 0; j < NUM_PLACE_TYPES; j++)
    {
    fprintf(pFILE,"  %f", pP->HQ_PlaceEffects_OverTime[i][j]);
    if ( ! pP->HQ_PlaceEffects_OverTime[i][j]) break;
    }
  if ( ! pP->HQ_PlaceEffects_OverTime[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HQ_Individual_PropComply_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->HQ_Individual_PropComply_OverTime[j]);
  if ( ! pP->HQ_Individual_PropComply_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HQ_Household_PropComply_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->HQ_Household_PropComply_OverTime[j]);
  if ( ! pP->HQ_Household_PropComply_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.HQ_CellIncThresh_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->HQ_CellIncThresh_OverTime[j]);
  if ( ! pP->HQ_CellIncThresh_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Num_PC_ChangeTimes=%i\n", pP->Num_PC_ChangeTimes);
fprintf(pFILE,"P.PC_ChangeTimes[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %i", pP->PC_ChangeTimes[j]);
  if ( ! pP->PC_ChangeTimes[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PC_SpatialEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->PC_SpatialEffects_OverTime[j]);
  if ( ! pP->PC_SpatialEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PC_HouseholdEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->PC_HouseholdEffects_OverTime[j]);
  if ( ! pP->PC_HouseholdEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PC_PlaceEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]=");
for (i = 0; i < MAX_NUM_INTERVENTION_CHANGE_TIMES; i++)
  {
  for (j = 0; j < NUM_PLACE_TYPES; j++)
    {
    fprintf(pFILE,"  %f", pP->PC_PlaceEffects_OverTime[i][j]);
    if ( ! pP->PC_PlaceEffects_OverTime[i][j]) break;
    }
  if ( ! pP->PC_PlaceEffects_OverTime[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PC_PropAttending_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES][NUM_PLACE_TYPES]=");
for (i = 0; i < MAX_NUM_INTERVENTION_CHANGE_TIMES; i++)
  {
  for (j = 0; j < NUM_PLACE_TYPES; j++)
    {
    fprintf(pFILE,"  %f", pP->PC_PropAttending_OverTime[i][j]);
    if ( ! pP->PC_PropAttending_OverTime[i][j]) break;
    }
  if ( ! pP->PC_PropAttending_OverTime[i][j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PC_IncThresh_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %i", pP->PC_IncThresh_OverTime[j]);
  if ( ! pP->PC_IncThresh_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PC_FracIncThresh_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->PC_FracIncThresh_OverTime[j]);
  if ( ! pP->PC_FracIncThresh_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PC_CellIncThresh_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %i", pP->PC_CellIncThresh_OverTime[j]);
  if ( ! pP->PC_CellIncThresh_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PC_Durs_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->PC_Durs_OverTime[j]);
  if ( ! pP->PC_Durs_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.Num_DCT_ChangeTimes=%i\n", pP->Num_DCT_ChangeTimes);
fprintf(pFILE,"P.DCT_ChangeTimes[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %i", pP->DCT_ChangeTimes[j]);
  if ( ! pP->DCT_ChangeTimes[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.DCT_SpatialAndPlaceEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->DCT_SpatialAndPlaceEffects_OverTime[j]);
  if ( ! pP->DCT_SpatialAndPlaceEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.DCT_HouseholdEffects_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->DCT_HouseholdEffects_OverTime[j]);
  if ( ! pP->DCT_HouseholdEffects_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.DCT_Prop_OverTime[MAX_NUM_INTERVENTION_CHANGE_TIMES]=");
for (j = 0; j < MAX_NUM_INTERVENTION_CHANGE_TIMES; j++)
  {
  fprintf(pFILE,"  %f", pP->DCT_Prop_OverTime[j]);
  if ( ! pP->DCT_Prop_OverTime[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.KeyWorkerProphTimeStart=%f\n", pP->KeyWorkerProphTimeStart);
fprintf(pFILE,"P.KeyWorkerProphDuration=%f\n", pP->KeyWorkerProphDuration);
fprintf(pFILE,"P.KeyWorkerPropInKeyPlaces[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %f", pP->KeyWorkerPropInKeyPlaces[j]);
  if ( ! pP->KeyWorkerPropInKeyPlaces[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.KeyWorkerHouseProp=%f\n", pP->KeyWorkerHouseProp);
fprintf(pFILE,"P.KeyWorkerProphRenewalDuration=%f\n", pP->KeyWorkerProphRenewalDuration);
fprintf(pFILE,"P.KeyWorkerProphRadius=%f\n", pP->KeyWorkerProphRadius);
fprintf(pFILE,"P.KeyWorkerProphRadius2=%f\n", pP->KeyWorkerProphRadius2);
fprintf(pFILE,"P.TreatTimeStartBase=%f\n", pP->TreatTimeStartBase);
fprintf(pFILE,"P.VaccTimeStartBase=%f\n", pP->VaccTimeStartBase);
fprintf(pFILE,"P.MoveRestrTimeStartBase=%f\n", pP->MoveRestrTimeStartBase);
fprintf(pFILE,"P.PlaceCloseTimeStartBase=%f\n", pP->PlaceCloseTimeStartBase);
fprintf(pFILE,"P.PlaceCloseTimeStartBase2=%f\n", pP->PlaceCloseTimeStartBase2);
fprintf(pFILE,"P.PlaceCloseTimeStartPrevious=%f\n", pP->PlaceCloseTimeStartPrevious);
fprintf(pFILE,"P.AirportCloseTimeStartBase=%f\n", pP->AirportCloseTimeStartBase);
fprintf(pFILE,"P.HQuarantineTimeStartBase=%f\n", pP->HQuarantineTimeStartBase);
fprintf(pFILE,"P.CaseIsolationTimeStartBase=%f\n", pP->CaseIsolationTimeStartBase);
fprintf(pFILE,"P.SocDistTimeStartBase=%f\n", pP->SocDistTimeStartBase);
fprintf(pFILE,"P.KeyWorkerProphTimeStartBase=%f\n", pP->KeyWorkerProphTimeStartBase);
fprintf(pFILE,"P.DigitalContactTracingTimeStartBase=%f\n", pP->DigitalContactTracingTimeStartBase);
fprintf(pFILE,"P.InfectionImportRate1=%f\n", pP->InfectionImportRate1);
fprintf(pFILE,"P.InfectionImportRate2=%f\n", pP->InfectionImportRate2);
fprintf(pFILE,"P.InfectionImportChangeTime=%f\n", pP->InfectionImportChangeTime);
fprintf(pFILE,"P.ImportInfectionTimeProfile[MAX_DUR_IMPORT_PROFILE]=");
for (j = 0; j < MAX_DUR_IMPORT_PROFILE; j++)
  {
  fprintf(pFILE,"  %f", pP->ImportInfectionTimeProfile[j]);
  if ( ! pP->ImportInfectionTimeProfile[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PreControlClusterIdTime=%f\n", pP->PreControlClusterIdTime);
fprintf(pFILE,"P.PreControlClusterIdCalTime=%f\n", pP->PreControlClusterIdCalTime);
fprintf(pFILE,"P.PreControlClusterIdHolOffset=%f\n", pP->PreControlClusterIdHolOffset);
fprintf(pFILE,"P.PreIntervIdCalTime=%f\n", pP->PreIntervIdCalTime);
fprintf(pFILE,"P.PreIntervTime=%f\n", pP->PreIntervTime);
fprintf(pFILE,"P.SeedingScaling=%f\n", pP->SeedingScaling);
fprintf(pFILE,"P.PreControlClusterIdCaseThreshold=%i\n", pP->PreControlClusterIdCaseThreshold);
fprintf(pFILE,"P.PreControlClusterIdUseDeaths=%i\n", pP->PreControlClusterIdUseDeaths);
fprintf(pFILE,"P.PreControlClusterIdDuration=%i\n", pP->PreControlClusterIdDuration);
fprintf(pFILE,"P.DoAlertTriggerAfterInterv=%i\n", pP->DoAlertTriggerAfterInterv);
fprintf(pFILE,"P.AlertTriggerAfterIntervThreshold=%i\n", pP->AlertTriggerAfterIntervThreshold);
fprintf(pFILE,"P.StopCalibration=%i\n", pP->StopCalibration);
fprintf(pFILE,"P.ModelCalibIteration=%i\n", pP->ModelCalibIteration);
fprintf(pFILE,"P.DoPerCapitaTriggers=%i\n", pP->DoPerCapitaTriggers);
fprintf(pFILE,"P.DoGlobalTriggers=%i\n", pP->DoGlobalTriggers);
fprintf(pFILE,"P.DoAdminTriggers=%i\n", pP->DoAdminTriggers);
fprintf(pFILE,"P.DoICUTriggers=%i\n", pP->DoICUTriggers);
fprintf(pFILE,"P.MoveRestrCellIncThresh=%i\n", pP->MoveRestrCellIncThresh);
fprintf(pFILE,"P.DoHQretrigger=%i\n", pP->DoHQretrigger);
fprintf(pFILE,"P.PlaceCloseCellIncThresh=%i\n", pP->PlaceCloseCellIncThresh);
fprintf(pFILE,"P.PlaceCloseCellIncThresh1=%i\n", pP->PlaceCloseCellIncThresh1);
fprintf(pFILE,"P.PlaceCloseCellIncThresh2=%i\n", pP->PlaceCloseCellIncThresh2);
fprintf(pFILE,"P.TriggersSamplingInterval=%i\n", pP->TriggersSamplingInterval);
fprintf(pFILE,"P.PlaceCloseIndepThresh=%i\n", pP->PlaceCloseIndepThresh);
fprintf(pFILE,"P.SocDistCellIncThresh=%i\n", pP->SocDistCellIncThresh);
fprintf(pFILE,"P.VaccPriorityGroupAge[2]=");
for (j = 0; j < 2; j++)
  {
  fprintf(pFILE,"  %i", pP->VaccPriorityGroupAge[j]);
  if ( ! pP->VaccPriorityGroupAge[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.PlaceCloseCellIncStopThresh=%i\n", pP->PlaceCloseCellIncStopThresh);
fprintf(pFILE,"P.SocDistCellIncStopThresh=%i\n", pP->SocDistCellIncStopThresh);
fprintf(pFILE,"P.PlaceCloseAdunitPlaceTypes[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->PlaceCloseAdunitPlaceTypes[j]);
  if ( ! pP->PlaceCloseAdunitPlaceTypes[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.DoPlaceCloseOnceOnly=%i\n", pP->DoPlaceCloseOnceOnly);
fprintf(pFILE,"P.DoSocDistOnceOnly=%i\n", pP->DoSocDistOnceOnly);
fprintf(pFILE,"P.DoMoveRestrOnceOnly=%i\n", pP->DoMoveRestrOnceOnly);
fprintf(pFILE,"P.DoKeyWorkerProphOnceOnly=%i\n", pP->DoKeyWorkerProphOnceOnly);
fprintf(pFILE,"P.VaccMaxRounds=%i\n", pP->VaccMaxRounds);
fprintf(pFILE,"P.VaccByAdminUnit=%i\n", pP->VaccByAdminUnit);
fprintf(pFILE,"P.VaccAdminUnitDivisor=%i\n", pP->VaccAdminUnitDivisor);
fprintf(pFILE,"P.TreatByAdminUnit=%i\n", pP->TreatByAdminUnit);
fprintf(pFILE,"P.TreatAdminUnitDivisor=%i\n", pP->TreatAdminUnitDivisor);
fprintf(pFILE,"P.MoveRestrByAdminUnit=%i\n", pP->MoveRestrByAdminUnit);
fprintf(pFILE,"P.MoveRestrAdminUnitDivisor=%i\n", pP->MoveRestrAdminUnitDivisor);
fprintf(pFILE,"P.PlaceCloseByAdminUnit=%i\n", pP->PlaceCloseByAdminUnit);
fprintf(pFILE,"P.PlaceCloseAdminUnitDivisor=%i\n", pP->PlaceCloseAdminUnitDivisor);
fprintf(pFILE,"P.KeyWorkerProphCellIncThresh=%i\n", pP->KeyWorkerProphCellIncThresh);
fprintf(pFILE,"P.KeyWorkerPopNum=%i\n", pP->KeyWorkerPopNum);
fprintf(pFILE,"P.KeyWorkerPlaceNum[NUM_PLACE_TYPES]=");
for (j = 0; j < NUM_PLACE_TYPES; j++)
  {
  fprintf(pFILE,"  %i", pP->KeyWorkerPlaceNum[j]);
  if ( ! pP->KeyWorkerPlaceNum[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.KeyWorkerNum=%i\n", pP->KeyWorkerNum);
fprintf(pFILE,"P.KeyWorkerIncHouseNum=%i\n", pP->KeyWorkerIncHouseNum);
fprintf(pFILE,"P.DoBlanketMoveRestr=%i\n", pP->DoBlanketMoveRestr);
fprintf(pFILE,"P.PlaceCloseIncTrig=%i\n", pP->PlaceCloseIncTrig);
fprintf(pFILE,"P.PlaceCloseIncTrig1=%i\n", pP->PlaceCloseIncTrig1);
fprintf(pFILE,"P.PlaceCloseIncTrig2=%i\n", pP->PlaceCloseIncTrig2);
fprintf(pFILE,"P.TreatMaxCoursesPerCase=%i\n", pP->TreatMaxCoursesPerCase);
fprintf(pFILE,"P.DoImportsViaAirports=%i\n", pP->DoImportsViaAirports);
fprintf(pFILE,"P.DoMassVacc=%i\n", pP->DoMassVacc);
fprintf(pFILE,"P.DurImportTimeProfile=%i\n", pP->DurImportTimeProfile);
fprintf(pFILE,"P.usHQuarantineHouseDuration=%i\n", pP->usHQuarantineHouseDuration);
fprintf(pFILE,"P.usVaccTimeToEfficacy=%i\n", pP->usVaccTimeToEfficacy);
fprintf(pFILE,"P.usVaccTimeEfficacySwitch=%i\n", pP->usVaccTimeEfficacySwitch);
fprintf(pFILE,"P.usCaseIsolationDuration=%i\n", pP->usCaseIsolationDuration);
fprintf(pFILE,"P.usCaseIsolationDelay=%i\n", pP->usCaseIsolationDelay);
fprintf(pFILE,"P.usCaseAbsenteeismDuration=%i\n", pP->usCaseAbsenteeismDuration);
fprintf(pFILE,"P.usCaseAbsenteeismDelay=%i\n", pP->usCaseAbsenteeismDelay);
fprintf(pFILE,"P.DoRecordInfEvents=%i\n", pP->DoRecordInfEvents);
fprintf(pFILE,"P.MaxInfEvents=%i\n", pP->MaxInfEvents);
fprintf(pFILE,"P.RecordInfEventsPerRun=%i\n", pP->RecordInfEventsPerRun);
fprintf(pFILE,"P.KernelPowerScale=%f\n", pP->KernelPowerScale);
fprintf(pFILE,"P.KernelOffsetScale=%f\n", pP->KernelOffsetScale);
fprintf(pFILE,"P.LimitNumInfections=%i\n", pP->LimitNumInfections);
fprintf(pFILE,"P.MaxNumInfections=%i\n", pP->MaxNumInfections);
fprintf(pFILE,"P.DoDigitalContactTracing=%i\n", pP->DoDigitalContactTracing);
fprintf(pFILE,"P.ClusterDigitalContactUsers=%i\n", pP->ClusterDigitalContactUsers);
fprintf(pFILE,"P.NDigitalContactUsers=%i\n", pP->NDigitalContactUsers);
fprintf(pFILE,"P.NDigitalHouseholdUsers=%i\n", pP->NDigitalHouseholdUsers);
fprintf(pFILE,"P.FindContactsOfDCTContacts=%i\n", pP->FindContactsOfDCTContacts);
fprintf(pFILE,"P.DoDCTTest=%i\n", pP->DoDCTTest);
fprintf(pFILE,"P.PropPopUsingDigitalContactTracing=%f\n", pP->PropPopUsingDigitalContactTracing);
fprintf(pFILE,"P.ScalingFactorSpatialDigitalContacts=%f\n", pP->ScalingFactorSpatialDigitalContacts);
fprintf(pFILE,"P.ScalingFactorPlaceDigitalContacts=%f\n", pP->ScalingFactorPlaceDigitalContacts);
fprintf(pFILE,"P.DigitalContactTracingDelay=%f\n", pP->DigitalContactTracingDelay);
fprintf(pFILE,"P.LengthDigitalContactIsolation=%f\n", pP->LengthDigitalContactIsolation);
fprintf(pFILE,"P.ProportionDigitalContactsIsolate=%f\n", pP->ProportionDigitalContactsIsolate);
fprintf(pFILE,"P.ProportionSmartphoneUsersByAge[NUM_AGE_GROUPS]=");
for (j = 0; j < NUM_AGE_GROUPS; j++)
  {
  fprintf(pFILE,"  %f", pP->ProportionSmartphoneUsersByAge[j]);
  if ( ! pP->ProportionSmartphoneUsersByAge[j]) break;
  }
fprintf(pFILE,"\n");
fprintf(pFILE,"P.DelayFromIndexCaseDetectionToDCTIsolation=%f\n", pP->DelayFromIndexCaseDetectionToDCTIsolation);
fprintf(pFILE,"P.DelayToTestIndexCase=%f\n", pP->DelayToTestIndexCase);
fprintf(pFILE,"P.DelayToTestDCTContacts=%f\n", pP->DelayToTestDCTContacts);
fprintf(pFILE,"P.SpecificityDCT=%f\n", pP->SpecificityDCT);
fprintf(pFILE,"P.SensitivityDCT=%f\n", pP->SensitivityDCT);
fprintf(pFILE,"P.DigitalContactTracingPolicyDuration=%f\n", pP->DigitalContactTracingPolicyDuration);
fprintf(pFILE,"P.DCTCaseIsolationHouseEffectiveness=%f\n", pP->DCTCaseIsolationHouseEffectiveness);
fprintf(pFILE,"P.DCTCaseIsolationEffectiveness=%f\n", pP->DCTCaseIsolationEffectiveness);
fprintf(pFILE,"P.OutputDigitalContactTracing=%i\n", pP->OutputDigitalContactTracing);
fprintf(pFILE,"P.OutputDigitalContactDist=%i\n", pP->OutputDigitalContactDist);
fprintf(pFILE,"P.IncludeHouseholdDigitalContactTracing=%i\n", pP->IncludeHouseholdDigitalContactTracing);
fprintf(pFILE,"P.IncludePlaceGroupDigitalContactTracing=%i\n", pP->IncludePlaceGroupDigitalContactTracing);
fprintf(pFILE,"P.DCTIsolateIndexCases=%i\n", pP->DCTIsolateIndexCases);
fprintf(pFILE,"P.RemoveContactsOfNegativeIndexCase=%i\n", pP->RemoveContactsOfNegativeIndexCase);
fprintf(pFILE,"P.DoOriginDestinationMatrix=%i\n", pP->DoOriginDestinationMatrix);
fprintf(pFILE,"P.DoInterventionDelaysByAdUnit=%i\n", pP->DoInterventionDelaysByAdUnit);
fprintf(pFILE,"P.OutputAge=%i\n", pP->OutputAge);
fprintf(pFILE,"P.OutputR0=%i\n", pP->OutputR0);
fprintf(pFILE,"P.OutputControls=%i\n", pP->OutputControls);
fprintf(pFILE,"P.OutputCountry=%i\n", pP->OutputCountry);
fprintf(pFILE,"P.OutputAdUnitVar=%i\n", pP->OutputAdUnitVar);
fprintf(pFILE,"P.OutputHousehold=%i\n", pP->OutputHousehold);
fprintf(pFILE,"P.OutputInfType=%i\n", pP->OutputInfType);
fprintf(pFILE,"P.OutputNonSeverity=%i\n", pP->OutputNonSeverity);
fprintf(pFILE,"P.OutputSeverityAdminUnit=%i\n", pP->OutputSeverityAdminUnit);
fprintf(pFILE,"P.OutputNonSummaryResults=%i\n", pP->OutputNonSummaryResults);
fprintf(pFILE,"P.MeanChildAgeGap=%i\n", pP->MeanChildAgeGap);
fprintf(pFILE,"P.MinAdultAge=%i\n", pP->MinAdultAge);
fprintf(pFILE,"P.MaxMFPartnerAgeGap=%i\n", pP->MaxMFPartnerAgeGap);
fprintf(pFILE,"P.MaxFMPartnerAgeGap=%i\n", pP->MaxFMPartnerAgeGap);
fprintf(pFILE,"P.MinParentAgeGap=%i\n", pP->MinParentAgeGap);
fprintf(pFILE,"P.MaxParentAgeGap=%i\n", pP->MaxParentAgeGap);
fprintf(pFILE,"P.MaxChildAge=%i\n", pP->MaxChildAge);
fprintf(pFILE,"P.OneChildTwoPersProb=%f\n", pP->OneChildTwoPersProb);
fprintf(pFILE,"P.TwoChildThreePersProb=%f\n", pP->TwoChildThreePersProb);
fprintf(pFILE,"P.OnePersHouseProbOld=%f\n", pP->OnePersHouseProbOld);
fprintf(pFILE,"P.TwoPersHouseProbOld=%f\n", pP->TwoPersHouseProbOld);
fprintf(pFILE,"P.OnePersHouseProbYoung=%f\n", pP->OnePersHouseProbYoung);
fprintf(pFILE,"P.TwoPersHouseProbYoung=%f\n", pP->TwoPersHouseProbYoung);
fprintf(pFILE,"P.OneChildProbYoungestChildUnderFive=%f\n", pP->OneChildProbYoungestChildUnderFive);
fprintf(pFILE,"P.TwoChildrenProbYoungestUnderFive=%f\n", pP->TwoChildrenProbYoungestUnderFive);
fprintf(pFILE,"P.ProbYoungestChildUnderFive=%f\n", pP->ProbYoungestChildUnderFive);
fprintf(pFILE,"P.ZeroChildThreePersProb=%f\n", pP->ZeroChildThreePersProb);
fprintf(pFILE,"P.OneChildFourPersProb=%f\n", pP->OneChildFourPersProb);
fprintf(pFILE,"P.YoungAndSingleSlope=%f\n", pP->YoungAndSingleSlope);
fprintf(pFILE,"P.YoungAndSingle=%i\n", pP->YoungAndSingle);
fprintf(pFILE,"P.NoChildPersAge=%i\n", pP->NoChildPersAge);
fprintf(pFILE,"P.OldPersAge=%i\n", pP->OldPersAge);
fprintf(pFILE,"P.ThreeChildFivePersProb=%f\n", pP->ThreeChildFivePersProb);
fprintf(pFILE,"P.OlderGenGap=%i\n", pP->OlderGenGap);
for (i = 0; i < pP->NumAdunits; i++)
  {
  fprintf(pFILE,"%s  %s\n",A[i].cnt_name,A[i].ad_name);
  } 

return;
}
