/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Interface to provide every encryption algorithm we implement
 */

#ifndef ENCRYPTION_ALGORITHMS
#define ENCRYPTION_ALGORITHMS

#include "encrypt_ty.h"

/*
 * The version of this init that all the encryption algorithms implement must
 * be included in the init function defined below to allow a user access
 * Eg. init_randomized_internal("")
 */
crypt* init_encryption_algorithm(const char*);
void free_crypt(crypt*);

/*
 * Encrypt and decrypt using our internal randomization based algorithm as
 * defined in the README
 */
crypt* init_randomized_internal();
void encrypt_randomized_internal(char* src, char* dst, char* key);
void decrypt_randomized_internal(char* src, char* dst, char* key);

#endif // ENCRYPTION_ALGORITHMS
