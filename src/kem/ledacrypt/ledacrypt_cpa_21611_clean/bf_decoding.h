#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"

#define              ITERATIONS_MAX   (4)

int OQS_KEM_LEDACRYPT_CPA_21611_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );

#define SYNDROME_TRESH_LOOKUP_TABLE { 0, 85},\
{ 4788, 86},\
{ 6434, 87},\
{ 7379, 88},\
{ 7951, 89},\
{ 8392, 90},\
{ 8701, 91},\
{ 8943, 92},\
{ 9131, 93},\
{ 9301, 94}
#define SYNDROME_TRESH_TABLE_SIZE 10
