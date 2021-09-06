#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"

#define              ITERATIONS_MAX   (4)

int OQS_KEM_LEDACRYPT_CPA_13109_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );

#define SYNDROME_TRESH_LOOKUP_TABLE { 0, 65},\
{ 3146, 66},\
{ 4039, 67},\
{ 4551, 68},\
{ 4929, 69},\
{ 5158, 70},\
{ 5332, 71},\
{ 5484, 72}
#define SYNDROME_TRESH_TABLE_SIZE 8
