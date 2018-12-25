/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Implementation for our default internal randomized encryption algorithm
 * defined in the README
 */

#include "randomized_internal.h"

FILE* encrypt_randomized_internal(FILE* img, char* key) {
    // TODO
}

FILE* decrypt_randomized_internal(FILE* img, char* key) {
    // TODO
}

crypt* init_randomized_internal() {
    crypt* randomized_internal = malloc(sizeof(crypt));
    crypt->name = "Default Randomized Internal Encryption Algorithm";
    crypt->encrypt = &encrypt_randomized_internal;
    crypt->decrypt = &decrypt_randomized_internal;
    return crypt;
}
