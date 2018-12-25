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
#include "randomized_internal/randomized_internal.h"

crypt* init(const char* name) {
    // return a crypt* based on the name provided
    // if no name provided, return our default encryption algorithm
    if(!strcmp(name, "randomized_internal")) {
        return init_randomized_internal();
    }
    return init_randomized_internal();
}
