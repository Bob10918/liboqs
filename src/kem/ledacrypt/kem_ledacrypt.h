// SPDX-License-Identifier: MIT

#ifndef OQS_KEM_LEDACRYPT_H
#define OQS_KEM_LEDACRYPT_H

#include <oqs/oqs.h>

#ifdef OQS_ENABLE_KEM_ledacrypt_23371
#define OQS_KEM_ledacrypt_23371_length_public_key 2928
#define OQS_KEM_ledacrypt_23371_length_secret_key 50
#define OQS_KEM_ledacrypt_23371_length_ciphertext 2952
#define OQS_KEM_ledacrypt_23371_length_shared_secret 32
OQS_KEM *OQS_KEM_ledacrypt_23371_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_23371_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_23371_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_23371_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_16067
#define OQS_KEM_ledacrypt_16067_length_public_key 4032
#define OQS_KEM_ledacrypt_16067_length_secret_key 50
#define OQS_KEM_ledacrypt_16067_length_ciphertext 2040
#define OQS_KEM_ledacrypt_16067_length_shared_secret 32
OQS_KEM *OQS_KEM_ledacrypt_16067_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_16067_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_16067_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_16067_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_13397
#define OQS_KEM_ledacrypt_13397_length_public_key 5040
#define OQS_KEM_ledacrypt_13397_length_secret_key 50
#define OQS_KEM_ledacrypt_13397_length_ciphertext 1704
#define OQS_KEM_ledacrypt_13397_length_shared_secret 32
OQS_KEM *OQS_KEM_ledacrypt_13397_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_13397_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_13397_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_13397_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_28277
#define OQS_KEM_ledacrypt_28277_length_public_key 3536
#define OQS_KEM_ledacrypt_28277_length_secret_key 50
#define OQS_KEM_ledacrypt_28277_length_ciphertext 3560
#define OQS_KEM_ledacrypt_28277_length_shared_secret 32
OQS_KEM *OQS_KEM_ledacrypt_28277_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_28277_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_28277_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_28277_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_19709
#define OQS_KEM_ledacrypt_19709_length_public_key 4928
#define OQS_KEM_ledacrypt_19709_length_secret_key 50
#define OQS_KEM_ledacrypt_19709_length_ciphertext 2488
#define OQS_KEM_ledacrypt_19709_length_shared_secret 32
OQS_KEM *OQS_KEM_ledacrypt_19709_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_19709_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_19709_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_19709_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_16229
#define OQS_KEM_ledacrypt_16229_length_public_key 6096
#define OQS_KEM_ledacrypt_16229_length_secret_key 50
#define OQS_KEM_ledacrypt_16229_length_ciphertext 2056
#define OQS_KEM_ledacrypt_16229_length_shared_secret 32
OQS_KEM *OQS_KEM_ledacrypt_16229_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_16229_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_16229_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_16229_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_40787
#define OQS_KEM_ledacrypt_40787_length_public_key 5104
#define OQS_KEM_ledacrypt_40787_length_secret_key 66
#define OQS_KEM_ledacrypt_40787_length_ciphertext 5136
#define OQS_KEM_ledacrypt_40787_length_shared_secret 48
OQS_KEM *OQS_KEM_ledacrypt_40787_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_40787_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_40787_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_40787_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_28411
#define OQS_KEM_ledacrypt_28411_length_public_key 7104
#define OQS_KEM_ledacrypt_28411_length_secret_key 66
#define OQS_KEM_ledacrypt_28411_length_ciphertext 3584
#define OQS_KEM_ledacrypt_28411_length_shared_secret 48
OQS_KEM *OQS_KEM_ledacrypt_28411_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_28411_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_28411_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_28411_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_22901
#define OQS_KEM_ledacrypt_22901_length_public_key 8592
#define OQS_KEM_ledacrypt_22901_length_secret_key 66
#define OQS_KEM_ledacrypt_22901_length_ciphertext 2896
#define OQS_KEM_ledacrypt_22901_length_shared_secret 48
OQS_KEM *OQS_KEM_ledacrypt_22901_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_22901_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_22901_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_22901_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_52667
#define OQS_KEM_ledacrypt_52667_length_public_key 6584
#define OQS_KEM_ledacrypt_52667_length_secret_key 66
#define OQS_KEM_ledacrypt_52667_length_ciphertext 6616
#define OQS_KEM_ledacrypt_52667_length_shared_secret 48
OQS_KEM *OQS_KEM_ledacrypt_52667_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_52667_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_52667_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_52667_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_36629
#define OQS_KEM_ledacrypt_36629_length_public_key 9168
#define OQS_KEM_ledacrypt_36629_length_secret_key 66
#define OQS_KEM_ledacrypt_36629_length_ciphertext 4616
#define OQS_KEM_ledacrypt_36629_length_shared_secret 48
OQS_KEM *OQS_KEM_ledacrypt_36629_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_36629_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_36629_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_36629_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_30803
#define OQS_KEM_ledacrypt_30803_length_public_key 11568
#define OQS_KEM_ledacrypt_30803_length_secret_key 66
#define OQS_KEM_ledacrypt_30803_length_ciphertext 3888
#define OQS_KEM_ledacrypt_30803_length_shared_secret 48
OQS_KEM *OQS_KEM_ledacrypt_30803_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_30803_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_30803_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_30803_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_61717
#define OQS_KEM_ledacrypt_61717_length_public_key 7720
#define OQS_KEM_ledacrypt_61717_length_secret_key 82
#define OQS_KEM_ledacrypt_61717_length_ciphertext 7760
#define OQS_KEM_ledacrypt_61717_length_shared_secret 64
OQS_KEM *OQS_KEM_ledacrypt_61717_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_61717_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_61717_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_61717_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_42677
#define OQS_KEM_ledacrypt_42677_length_public_key 10672
#define OQS_KEM_ledacrypt_42677_length_secret_key 82
#define OQS_KEM_ledacrypt_42677_length_ciphertext 5376
#define OQS_KEM_ledacrypt_42677_length_shared_secret 64
OQS_KEM *OQS_KEM_ledacrypt_42677_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_42677_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_42677_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_42677_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_35507
#define OQS_KEM_ledacrypt_35507_length_public_key 13320
#define OQS_KEM_ledacrypt_35507_length_secret_key 82
#define OQS_KEM_ledacrypt_35507_length_ciphertext 4480
#define OQS_KEM_ledacrypt_35507_length_shared_secret 64
OQS_KEM *OQS_KEM_ledacrypt_35507_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_35507_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_35507_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_35507_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_83579
#define OQS_KEM_ledacrypt_83579_length_public_key 10448
#define OQS_KEM_ledacrypt_83579_length_secret_key 82
#define OQS_KEM_ledacrypt_83579_length_ciphertext 10488
#define OQS_KEM_ledacrypt_83579_length_shared_secret 64
OQS_KEM *OQS_KEM_ledacrypt_83579_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_83579_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_83579_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_83579_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_58171
#define OQS_KEM_ledacrypt_58171_length_public_key 14544
#define OQS_KEM_ledacrypt_58171_length_secret_key 82
#define OQS_KEM_ledacrypt_58171_length_ciphertext 7312
#define OQS_KEM_ledacrypt_58171_length_shared_secret 64
OQS_KEM *OQS_KEM_ledacrypt_58171_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_58171_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_58171_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_58171_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_48371
#define OQS_KEM_ledacrypt_48371_length_public_key 18144
#define OQS_KEM_ledacrypt_48371_length_secret_key 82
#define OQS_KEM_ledacrypt_48371_length_ciphertext 6088
#define OQS_KEM_ledacrypt_48371_length_shared_secret 64
OQS_KEM *OQS_KEM_ledacrypt_48371_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_48371_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_48371_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_48371_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_ledacrypt_cpa_10883
#define OQS_KEM_ledacrypt_cpa_10883_length_public_key 1368
#define OQS_KEM_ledacrypt_cpa_10883_length_secret_key 1160
#define OQS_KEM_ledacrypt_cpa_10883_length_ciphertext 1392
#define OQS_KEM_ledacrypt_cpa_10883_length_shared_secret 32
OQS_KEM *OQS_KEM_ledacrypt_cpa_10883_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_10883_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_10883_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_10883_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif
#ifdef OQS_ENABLE_KEM_ledacrypt_cpa_8237
#define OQS_KEM_ledacrypt_cpa_8237_length_public_key 2064
#define OQS_KEM_ledacrypt_cpa_8237_length_secret_key 1920
#define OQS_KEM_ledacrypt_cpa_8237_length_ciphertext 1056
#define OQS_KEM_ledacrypt_cpa_8237_length_shared_secret 32
OQS_KEM *OQS_KEM_ledacrypt_cpa_8237_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_8237_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_8237_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_8237_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif
#ifdef OQS_ENABLE_KEM_ledacrypt_cpa_7187
#define OQS_KEM_ledacrypt_cpa_7187_length_public_key 2712
#define OQS_KEM_ledacrypt_cpa_7187_length_secret_key 2680
#define OQS_KEM_ledacrypt_cpa_7187_length_ciphertext 928
#define OQS_KEM_ledacrypt_cpa_7187_length_shared_secret 32
OQS_KEM *OQS_KEM_ledacrypt_cpa_7187_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_7187_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_7187_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_7187_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif
#ifdef OQS_ENABLE_KEM_ledacrypt_cpa_21011
#define OQS_KEM_ledacrypt_cpa_21011_length_public_key 2632
#define OQS_KEM_ledacrypt_cpa_21011_length_secret_key 1680
#define OQS_KEM_ledacrypt_cpa_21011_length_ciphertext 2664
#define OQS_KEM_ledacrypt_cpa_21011_length_shared_secret 48
OQS_KEM *OQS_KEM_ledacrypt_cpa_21011_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_21011_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_21011_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_21011_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif
#ifdef OQS_ENABLE_KEM_ledacrypt_cpa_15373
#define OQS_KEM_ledacrypt_cpa_15373_length_public_key 3856
#define OQS_KEM_ledacrypt_cpa_15373_length_secret_key 2840
#define OQS_KEM_ledacrypt_cpa_15373_length_ciphertext 1960
#define OQS_KEM_ledacrypt_cpa_15373_length_shared_secret 48
OQS_KEM *OQS_KEM_ledacrypt_cpa_15373_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_15373_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_15373_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_15373_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif
#ifdef OQS_ENABLE_KEM_ledacrypt_cpa_13109
#define OQS_KEM_ledacrypt_cpa_13109_length_public_key 4920
#define OQS_KEM_ledacrypt_cpa_13109_length_secret_key 3968
#define OQS_KEM_ledacrypt_cpa_13109_length_ciphertext 1672
#define OQS_KEM_ledacrypt_cpa_13109_length_shared_secret 48
OQS_KEM *OQS_KEM_ledacrypt_cpa_13109_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_13109_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_13109_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_13109_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif
#ifdef OQS_ENABLE_KEM_ledacrypt_cpa_35339
#define OQS_KEM_ledacrypt_cpa_35339_length_public_key 4424
#define OQS_KEM_ledacrypt_cpa_35339_length_secret_key 2232
#define OQS_KEM_ledacrypt_cpa_35339_length_ciphertext 4464
#define OQS_KEM_ledacrypt_cpa_35339_length_shared_secret 64
OQS_KEM *OQS_KEM_ledacrypt_cpa_35339_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_35339_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_35339_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_35339_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif
#ifdef OQS_ENABLE_KEM_ledacrypt_cpa_25603
#define OQS_KEM_ledacrypt_cpa_25603_length_public_key 6416
#define OQS_KEM_ledacrypt_cpa_25603_length_secret_key 3760
#define OQS_KEM_ledacrypt_cpa_25603_length_ciphertext 3248
#define OQS_KEM_ledacrypt_cpa_25603_length_shared_secret 64
OQS_KEM *OQS_KEM_ledacrypt_cpa_25603_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_25603_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_25603_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_25603_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif
#ifdef OQS_ENABLE_KEM_ledacrypt_cpa_21611
#define OQS_KEM_ledacrypt_cpa_21611_length_public_key 8112
#define OQS_KEM_ledacrypt_cpa_21611_length_secret_key 5256
#define OQS_KEM_ledacrypt_cpa_21611_length_ciphertext 2744
#define OQS_KEM_ledacrypt_cpa_21611_length_shared_secret 64
OQS_KEM *OQS_KEM_ledacrypt_cpa_21611_new(void);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_21611_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_21611_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_ledacrypt_cpa_21611_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#endif // OQS_KEM_LEDACRYPT_H