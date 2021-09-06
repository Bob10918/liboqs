#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"

#define              ITERATIONS_MAX   (4)

int OQS_KEM_LEDACRYPT_CPA_25603_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );

#define SYNDROME_TRESH_LOOKUP_TABLE { 0, 81},\
{ 6294, 82},\
{ 8005, 83},\
{ 8998, 84},\
{ 9635, 85},\
{ 10100, 86},\
{ 10440, 87},\
{ 10712, 88},\
{ 10930, 89},\
{ 11104, 90}
#define SYNDROME_TRESH_TABLE_SIZE 10
