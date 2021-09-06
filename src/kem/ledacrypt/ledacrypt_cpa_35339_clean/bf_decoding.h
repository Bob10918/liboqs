#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"

#define              ITERATIONS_MAX   (4)

int OQS_KEM_LEDACRYPT_CPA_35339_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );

#define SYNDROME_TRESH_LOOKUP_TABLE { 0, 71},\
{ 5931, 72},\
{ 9784, 73},\
{ 11717, 74},\
{ 12924, 75},\
{ 13737, 76},\
{ 14307, 77},\
{ 14749, 78},\
{ 15073, 79},\
{ 15343, 80}
#define SYNDROME_TRESH_TABLE_SIZE 10
