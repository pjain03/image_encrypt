/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Implementation to provide the requested encryption algorithm to the caller
 * in our internally defined structure
 *
 * Provided Implementations:
 * - [DEFAULT] randomized_internal: See README
 */

#include "encryption.h"

crypt* init_encryption_algorithm(const char* name) {
    if(!strcmp(name, "randomized_internal")) {
        return init_randomized_internal();
    }
    return init_randomized_internal();
}

void free_crypt(crypt* encryption_algorithm) {
    free(encryption_algorithm);
}

crypt* init_randomized_internal() {
    crypt* randomized_internal = malloc(sizeof(crypt));
    randomized_internal->name = "Randomized Encryption [DEFAULT]";
    randomized_internal->encrypt = &encrypt_randomized_internal;
    randomized_internal->decrypt = &decrypt_randomized_internal;
    return randomized_internal;
}

void encrypt_randomized_internal(char* src, char* dst, char* key) {
    printf("ENCRYPT\n");
}

void decrypt_randomized_internal(char* src, char* dst, char* key) {
    printf("DECRYPT\n");
}
