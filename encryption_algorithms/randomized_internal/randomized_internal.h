/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Interface for our default internal randomized encryption algorithm defined
 * in the README
 */

#ifndef ENCRYPTION_ALGORITHMS_RANDOMIZED_INTERNAL
#define ENCRYPTION_ALGORITHMS_RANDOMIZED_INTERNAL

#include "../encryption.h"

crypt* init_randomized_internal();
FILE* encrypt_randomized_internal(FILE*, char*);
FILE* decrypt_randomized_internal(FILE*, char*);

#endif // ENCRYPTION_ALGORITHMS_RANDOMIZED_INTERNAL
