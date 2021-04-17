#ifndef QC_LDPC_PARAMETERS
#define QC_LDPC_PARAMETERS




#define    P  (48371)
#define    V  (161)
#define    NUM_ERRORS_T  (131)


#define TRNG_BYTE_LENGTH (40)
#define    HASH_FUNCTION  sha3_512
#define HASH_BYTE_LENGTH (64)


#define     N0 (4)

// Derived parameters, they are useful for QC-LDPC algorithms
#define HASH_BIT_LENGTH (HASH_BYTE_LENGTH << 3)
#define               K ((N0-1)*P)
#define               N (N0*P)

#endif
