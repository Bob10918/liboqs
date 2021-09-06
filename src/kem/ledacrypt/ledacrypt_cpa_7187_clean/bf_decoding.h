#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"

#define              ITERATIONS_MAX   (4)

int OQS_KEM_LEDACRYPT_CPA_7187_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );

#define SYNDROME_TRESH_LOOKUP_TABLE { 0, 45},\
{ 1874, 46},\
{ 2325, 47},\
{ 2590, 48},\
{ 2762, 49}
#define SYNDROME_TRESH_TABLE_SIZE 5
