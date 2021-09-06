#ifndef BF_DECODING_H
#define BF_DECODING_H

#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"
#define  ITERATIONS_MAX   (2)

int OQS_KEM_LEDACRYPT_40787_CLEAN_bf_decoding(DIGIT err[],
                              const POSITION_T HtrPosOnes[N0][V],
                              DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
                              );
/* OQS_KEM_LEDACRYPT_40787_CLEAN_thresholds and tbars for imaxin = 0imaxout = 2 CCA ledadecoder */






#define T_BAR 13
#define B0 56












#endif
