/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Implementation for our default internal randomized encryption algorithm
 * defined in the README
 */

#include "randomized_internal.h"

FILE* encrypt_randomized_internal(FILE* img, char* key) {
    return img;
}

FILE* decrypt_randomized_internal(FILE* img, char* key) {
    return img;
}

crypt* init_randomized_internal() {
    crypt* randomized_internal = malloc(sizeof(crypt));
    randomized_internal->name = "Randomized Encryption [DEFAULT]";
    randomized_internal->encrypt = &encrypt_randomized_internal;
    randomized_internal->decrypt = &decrypt_randomized_internal;
    return randomized_internal;
}
