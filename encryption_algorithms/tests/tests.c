/*
 * Author: Pulkit Jain
 * 12/26/2018
 *
 * Runs all our tests for the algorithms section of the project
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../encryption.h"
#include "../../utilities/utilities.h"

/*
 * Testing if default initialization works.
 * Further testing must include encryption/decryption.
 */
test* test1() {
    crypt* def_init = init_encryption_algorithm("");
    free_crypt(def_init);
    
    test* t = malloc(sizeof(test));
    t->msg = "Testing if default initialization works";
    t->result = 1;
    return t;
}

int main() {
    log_tests(test1());
    return EXIT_SUCCESS;
}
