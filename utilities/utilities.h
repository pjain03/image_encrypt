/*
 * Author: Pulkit Jain
 * 12/26/2018
 *
 * Interface providing common utility functions to other modules
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * All tests must return this type of structure
 * - msg: a message that describes what the test is testing
 * - result: a boolean indicating whether the test passed or not
 */
typedef struct {
    const char* msg;
    int result;
} test;

void log_tests(test*);
