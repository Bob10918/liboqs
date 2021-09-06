#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"

#define              ITERATIONS_MAX   (6)

int OQS_KEM_LEDACRYPT_CPA_21011_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );

#define SYNDROME_TRESH_LOOKUP_TABLE { 0, 54},\
{ 3930, 55},\
{ 6033, 56},\
{ 7149, 57},\
{ 7834, 58},\
{ 8293, 59},\
{ 8618, 60},\
{ 8863, 61}
#define SYNDROME_TRESH_TABLE_SIZE 8
