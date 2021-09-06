#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"

#define              ITERATIONS_MAX   (5)

int OQS_KEM_LEDACRYPT_CPA_15373_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );

#define SYNDROME_TRESH_LOOKUP_TABLE { 0, 62},\
{ 3980, 63},\
{ 4961, 64},\
{ 5523, 65},\
{ 5888, 66},\
{ 6145, 67},\
{ 6344, 68},\
{ 6500, 69}
#define SYNDROME_TRESH_TABLE_SIZE 8
