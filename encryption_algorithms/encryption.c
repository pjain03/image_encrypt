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
