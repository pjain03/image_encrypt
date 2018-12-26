/*
 * Author: Pulkit Jain
 * 12/26/2018
 *
 * Implementations of common utilities functions other modules will use
 */

#include "utilities.h"

void log_tests(test* result) {
    printf("%s: ", result->msg);
    if(result->result)
        printf("PASSED");
    else
        printf("FAILED");
    printf("\n");
    free(result);
}
