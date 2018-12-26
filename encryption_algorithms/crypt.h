/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Structure we will use to export all our encryption algorithms
 */

#ifndef ENCRYPTION_ALGORITHMS_CRYPT
#define ENCRYPTION_ALGORITHMS_CRYPT

#include <stdio.h>

/*
 *  Every encryption algorithm we implement must include a version of the
 *  init function that returns a crypt type structure which is defined below
 */
typedef struct {
    const char* name;
    FILE* (*encrypt) (FILE*, char*);
    FILE* (*decrypt) (FILE*, char*);
} crypt;

#endif // ENCRYPTION_ALGORITHMS_CRYPT
