/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Interface to provide every encryption algorithm we implement
 */

#ifndef ENCRYPTION_ALGORITHMS
#define ENCRYPTION_ALGORITHMS

#include "encrypt_ty.h"
#include "randomized_internal/randomized_internal.h"

/*
 * The version of this init that all the encryption algorithms implement must
 * be included in the init function defined below to allow a user access
 * Eg. init_randomized_internal()
 */
crypt* init_encryption_algorithm(const char*);
void free_crypt(crypt*);

#endif // ENCRYPTION_ALGORITHMS
