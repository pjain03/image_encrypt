/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Interface for our default internal randomized encryption algorithm defined
 * in the README
 */

#ifndef ENCRYPTION_ALGORITHMS_RANDOMIZED_INTERNAL
#define ENCRYPTION_ALGORITHMS_RANDOMIZED_INTERNAL

#include "../encrypt_ty.h"

crypt* init_randomized_internal();
void encrypt_randomized_internal(char* src, char* dst, char* key);
void decrypt_randomized_internal(char* src, char* dst, char* key);

#endif // ENCRYPTION_ALGORITHMS_RANDOMIZED_INTERNAL
