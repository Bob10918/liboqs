#ifndef OQS_KEM_LEDACRYPT_30803_CLEAN_AES256_H
#define OQS_KEM_LEDACRYPT_30803_CLEAN_AES256_H

#define NROUNDS 14
#define KEYLEN_b 256

#include <stdint.h>

int OQS_KEM_LEDACRYPT_30803_CLEAN_rijndaelKeySetupEnc(uint32_t rk[/*4*(Nr + 1)*/], const uint8_t cipherKey[]);
void OQS_KEM_LEDACRYPT_30803_CLEAN_rijndaelEncrypt(const uint32_t rk[/*4*(Nr + 1)*/], int Nr,
                                   const uint8_t pt[16], uint8_t ct[16]);

#endif