#ifndef QC_LDPC_PARAMETERS
#define QC_LDPC_PARAMETERS



#define    P  (30803)
#define    V  (123)
#define    NUM_ERRORS_T  (98)



#define TRNG_BYTE_LENGTH (32)
#define    HASH_FUNCTION sha3_384
#define HASH_BYTE_LENGTH (48)

/*----------------------------------------------------------------------------*/

// We employ the parameters for Category 4 also in the case where the required
// security level is Category 5, where Category 4 has the following parameters.
// #if CATEGORY == 4
//   #define TRNG_BYTE_LENGTH (40)
//   #define    HASH_FUNCTION sha3_384
//   #define HASH_BYTE_LENGTH (48)
// #endif

/*----------------------------------------------------------------------------*/



#define     N0 (4)

// Derived parameters, they are useful for QC-LDPC algorithms
#define HASH_BIT_LENGTH (HASH_BYTE_LENGTH << 3)
#define               K ((N0-1)*P)
#define               N (N0*P)

#endif
