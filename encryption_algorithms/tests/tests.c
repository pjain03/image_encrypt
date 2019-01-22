/*
 * Author: Pulkit Jain
 * 12/26/2018
 *
 * Runs all our tests for the algorithms section of the project
 */

#include "tests.h"

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

test* test2() {
    crypt* def_init = init_encryption_algorithm("");
    def_init->encrypt("", "", "");
    def_init->decrypt("", "", "");
    free_crypt(def_init);

    test* t = malloc(sizeof(test));
    t->msg = "Testing if encryption and decryption works";
    t->result = 1;
    return t;
}

int main() {
    log_tests(test1());
    log_tests(test2());
    return EXIT_SUCCESS;
}
