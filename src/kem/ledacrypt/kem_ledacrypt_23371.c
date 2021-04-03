// SPDX-License-Identifier: MIT

#include <stdlib.h>

#include <oqs/kem_ledacrypt.h>

#ifdef OQS_ENABLE_KEM_ledacrypt_23371

OQS_KEM *OQS_KEM_ledacrypt_23371_new() {

	OQS_KEM *kem = malloc(sizeof(OQS_KEM));
	if (kem == NULL) {
		return NULL;
	}
	kem->method_name = OQS_KEM_alg_ledacrypt_23371;
	kem->alg_version = "https://github.com/Bob10918/LEDAcrypt/commit/b176d7c6821700f5124f591b50ccae9d5f25ee91";

	kem->claimed_nist_level = 1;
	kem->ind_cca = true;

	kem->length_public_key = OQS_KEM_ledacrypt_23371_length_public_key;
	kem->length_secret_key = OQS_KEM_ledacrypt_23371_length_secret_key;
	kem->length_ciphertext = OQS_KEM_ledacrypt_23371_length_ciphertext;
	kem->length_shared_secret = OQS_KEM_ledacrypt_23371_length_shared_secret;

	kem->keypair = OQS_KEM_ledacrypt_23371_keypair;
	kem->encaps = OQS_KEM_ledacrypt_23371_encaps;
	kem->decaps = OQS_KEM_ledacrypt_23371_decaps;

	return kem;
}

#endif