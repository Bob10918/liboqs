#ifndef QC_LDPC_PARAMETERS
#define QC_LDPC_PARAMETERS


#define    P  (28277)
#define    V  (69)
#define    NUM_ERRORS_T  (129)




#define TRNG_BYTE_LENGTH (24)
#define    HASH_FUNCTION sha3_256
#define HASH_BYTE_LENGTH (32)

/*----------------------------------------------------------------------------*/

// We employ the parameters for Category 3 also in the case where the required
// security level is Category 2, where Category 2 has the following parameters.
//   #define TRNG_BYTE_LENGTH (32)
//   #define    HASH_FUNCTION sha3_256
//   #define HASH_BYTE_LENGTH (32)

/*----------------------------------------------------------------------------*/



#define     N0 (2)

// Derived parameters, they are useful for QC-LDPC algorithms
#define HASH_BIT_LENGTH (HASH_BYTE_LENGTH << 3)
#define               K ((N0-1)*P)
#define               N (N0*P)

#endif
