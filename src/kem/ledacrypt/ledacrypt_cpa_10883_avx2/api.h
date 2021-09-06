#ifndef OQS_KEM_LEDACRYPT_CPA_10883_AVX2_API_H
#define OQS_KEM_LEDACRYPT_CPA_10883_AVX2_API_H

#include <stddef.h>
#include <stdint.h>


#define OQS_KEM_LEDACRYPT_CPA_10883_AVX2_CRYPTO_ALGNAME "LEDAcrypt"

/* required bytes of input randomness */
#define  OQS_KEM_LEDACRYPT_CPA_10883_AVX2_CRYPTO_RANDOMBYTES 24      //TRNG_BYTE_LENGTH

/* size in bytes of the secret key */
#define  OQS_KEM_LEDACRYPT_CPA_10883_AVX2_CRYPTO_SECRETKEYBYTES 1160     //(TRNG_BYTE_LENGTH*2)+2

/* size in bytes of the public key */
#define  OQS_KEM_LEDACRYPT_CPA_10883_AVX2_CRYPTO_PUBLICKEYBYTES 1368    // DIGIT Mtr[(N0-1)*[(P+DIGIT_b-1)/DIGIT_b]]

/* size in bytes of the shared secret */
#define  OQS_KEM_LEDACRYPT_CPA_10883_AVX2_CRYPTO_BYTES 32        //HASH_BYTE_LENGTH

/*size in bytes of the ciphertext*/
#define  OQS_KEM_LEDACRYPT_CPA_10883_AVX2_CRYPTO_CIPHERTEXTBYTES 1392


/* Generates a keypair - pk is the public key and sk is the secret key. */
int OQS_KEM_LEDACRYPT_CPA_10883_AVX2_crypto_kem_keypair(uint8_t *pk,
                                     uint8_t *sk );

/* Encrypt - pk is the public key, ct is a key encapsulation message
  (ciphertext), ss is the shared secret.*/
int OQS_KEM_LEDACRYPT_CPA_10883_AVX2_crypto_kem_enc(uint8_t *ct,
                                 uint8_t *ss,
                                 const uint8_t *pk );


/* Decrypt - ct is a key encapsulation message (ciphertext), sk is the private
   key, ss is the shared secret */

int OQS_KEM_LEDACRYPT_CPA_10883_AVX2_crypto_kem_dec(uint8_t *ss,
                                 const uint8_t *ct,
                                 const uint8_t *sk );

#endif