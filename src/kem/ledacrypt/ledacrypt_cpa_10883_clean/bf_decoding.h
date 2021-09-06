#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"

#define              ITERATIONS_MAX   (6)

int OQS_KEM_LEDACRYPT_CPA_10883_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );

#define SYNDROME_TRESH_LOOKUP_TABLE { 0, 38},\
{ 2248, 39},\
{ 3292, 40},\
{ 3835, 41},\
{ 4176, 42},\
{ 4391, 43}
#define SYNDROME_TRESH_TABLE_SIZE 6
