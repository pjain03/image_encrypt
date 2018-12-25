/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Interface for every encryption algorithm we implement
 */

#ifndef ENCRYPTION_ALGORITHMS
#define ENCRYPTION_ALGORITHMS

/*
 *  Every encryption algorithm we implement must include a version of the
 *  init function that returns a crypt type structure which is defined below
 */
typedef struct {
    const char* name;
    FILE* (*encrypt) (FILE*, char*);
    FILE* (*decrypt) (FILE*, char*);
} crypt;

/*
 * The version of this init that all the encryption algorithms implement must
 * be included in the init function defined below to allow a user access
 */
crypt* init(const char*);

#endif // ENCRYPTION_ALGORITHMS
