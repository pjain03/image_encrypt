/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Implementation for our default internal randomized encryption algorithm
 * defined in the README
 */

#include "randomized_internal.h"

void encrypt_randomized_internal(char* src, char* dst, char* key) {
    int x, y, n;
    unsigned char* data = stbi_load(src, &x, &y, &n, 3);
    printf("ENCRYPT\n");
}

void decrypt_randomized_internal(char* src, char* dst, char* key) {
    printf("DECRYPT\n");
}

crypt* init_randomized_internal() {
    crypt* randomized_internal = malloc(sizeof(crypt));
    randomized_internal->name = "Randomized Encryption [DEFAULT]";
    randomized_internal->encrypt = &encrypt_randomized_internal;
    randomized_internal->decrypt = &decrypt_randomized_internal;
    return randomized_internal;
}
