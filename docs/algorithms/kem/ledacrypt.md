# LEDAcrypt

- **Algorithm type**: key encapsulation mechanism
- **Main cryptographic assumption**: Low-density parity-check code-based cryptography
- **Scheme authors**: Marco Baldi, Alessandro Barenghi, Franco Chiaraluce, Gerardo Pelosi, Paolo Santini
- **Authors' website**: https://www.ledacrypt.org/
- **Version**: 3

## Implementation

- **Source of implementation**: LEDAcrypt
- **Implementation version**: https://github.com/LEDAcrypt/LEDAcrypt, master, 4b50a4f87c82192db71f10fc33b2c11e94d064ad
- **License**: Public domain
- **Constant-time**: Yes
- **Optimizations**: Portable C with AVX2

## Parameter sets

| Parameter set             | Security model | Claimed NIST security level | Public key size (bytes) | Secret key size (bytes) | Ciphertext size (bytes) | Shared secret size (bytes) |
| ------------------------- | -------------- | --------------------------- | ----------------------- | ----------------------- | ----------------------- | -------------------------- |
| LEDAcrypt-23371           | IND-CCA2       | 1                           | 2928                    | 50                      | 2952                    | 32                         |
| LEDAcrypt-16067           | IND-CCA2       | 1                           | 4032                    | 50                      | 2040                    | 32                         |
| LEDAcrypt-13397           | IND-CCA2       | 1                           | 5040                    | 50                      | 1704                    | 32                         |
| LEDAcrypt-28277           | IND-CCA2       | 1                           | 3536                    | 50                      | 3560                    | 32                         |
| LEDAcrypt-19709           | IND-CCA2       | 1                           | 4928                    | 50                      | 2488                    | 32                         |
| LEDAcrypt-16229           | IND-CCA2       | 1                           | 6096                    | 50                      | 2056                    | 32                         |
| LEDAcrypt-40787           | IND-CCA2       | 3                           | 5104                    | 66                      | 5136                    | 48                         |
| LEDAcrypt-28411           | IND-CCA2       | 3                           | 7104                    | 66                      | 3584                    | 48                         |
| LEDAcrypt-22901           | IND-CCA2       | 3                           | 8592                    | 66                      | 2896                    | 48                         |
| LEDAcrypt-52667           | IND-CCA2       | 3                           | 6584                    | 66                      | 6616                    | 48                         |
| LEDAcrypt-36629           | IND-CCA2       | 3                           | 9168                    | 66                      | 4616                    | 48                         |
| LEDAcrypt-30803           | IND-CCA2       | 3                           | 11568                   | 66                      | 3888                    | 48                         |
| LEDAcrypt-61717           | IND-CCA2       | 5                           | 7720                    | 82                      | 7760                    | 64                         |
| LEDAcrypt-42677           | IND-CCA2       | 5                           | 10672                   | 82                      | 5376                    | 64                         |
| LEDAcrypt-35507           | IND-CCA2       | 5                           | 13320                   | 82                      | 4480                    | 64                         |
| LEDAcrypt-83579           | IND-CCA2       | 5                           | 10448                   | 82                      | 10488                   | 64                         |
| LEDAcrypt-58171           | IND-CCA2       | 5                           | 14544                   | 82                      | 7312                    | 64                         |
| LEDAcrypt-48371           | IND-CCA2       | 5                           | 18144                   | 82                      | 6088                    | 64                         |
| LEDAcrypt-CPA-10883       | IND-CCA2       | 1                           | 1368                    | 1160                    | 1392                    | 32                         |
| LEDAcrypt-CPA-8237        | IND-CCA2       | 1                           | 2064                    | 1920                    | 1056                    | 32                         |
| LEDAcrypt-CPA-7187        | IND-CCA2       | 1                           | 2712                    | 2680                    | 928                     | 32                         |
| LEDAcrypt-CPA-21011       | IND-CCA2       | 3                           | 2632                    | 1680                    | 2664                    | 48                         |
| LEDAcrypt-CPA-15373       | IND-CCA2       | 3                           | 3856                    | 2840                    | 1960                    | 48                         |
| LEDAcrypt-CPA-13109       | IND-CCA2       | 3                           | 4920                    | 3968                    | 1672                    | 48                         |
| LEDAcrypt-CPA-35339       | IND-CCA2       | 5                           | 4424                    | 2232                    | 4464                    | 64                         |
| LEDAcrypt-CPA-25603       | IND-CCA2       | 5                           | 6416                    | 3760                    | 3248                    | 64                         |
| LEDAcrypt-CPA-21611       | IND-CCA2       | 5                           | 8112                    | 5256                    | 2744                    | 64                         |