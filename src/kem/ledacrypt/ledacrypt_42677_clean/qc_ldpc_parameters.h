#ifndef QC_LDPC_PARAMETERS
#define QC_LDPC_PARAMETERS




#define    P  (42677)
#define    V  (153)
#define    NUM_ERRORS_T  (165)


#define TRNG_BYTE_LENGTH (40)
#define    HASH_FUNCTION  sha3_512
#define HASH_BYTE_LENGTH (64)


#define     N0 (3)

// Derived parameters, they are useful for QC-LDPC algorithms
#define HASH_BIT_LENGTH (HASH_BYTE_LENGTH << 3)
#define               K ((N0-1)*P)
#define               N (N0*P)

#endif