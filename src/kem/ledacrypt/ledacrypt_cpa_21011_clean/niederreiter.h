#ifndef NIEDERREITER_H
#define NIEDERREITER_H

#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"
#include "gf2x_arith_mod_xPplusOne.h"


/*----------------------------------------------------------------------------*/
#pragma pack(1)

typedef struct {
    POSITION_T HtrPosOnes[N0][V];
    POSITION_T HPosOnes[N0][V];
    unsigned char LongTermSeed[TRNG_BYTE_LENGTH];
} privateKeyNiederreiter_t;

typedef struct {
    DIGIT Mtr[(N0-1)*NUM_DIGITS_GF2X_ELEMENT];
    // Dense representation of the matrix M=Ln0*L,
    // An array including a sequence of (N0-1) gf2x elements;
    // each gf2x element is stored as a binary polynomial(mod x^P+1)
    // with P coefficients.
} publicKeyNiederreiter_t;

#pragma pack()
/*----------------------------------------------------------------------------*/

#endif
