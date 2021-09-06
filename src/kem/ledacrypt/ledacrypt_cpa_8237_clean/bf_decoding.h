#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"

#define              ITERATIONS_MAX   (5)

int OQS_KEM_LEDACRYPT_CPA_8237_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );

#define SYNDROME_TRESH_LOOKUP_TABLE { 0, 42},\
{ 1296, 43},\
{ 2313, 44},\
{ 2770, 45},\
{ 3030, 46},\
{ 3222, 47}
#define SYNDROME_TRESH_TABLE_SIZE 6
