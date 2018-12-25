/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Interface for every encryption algorithm we implement
 */

#ifndef ENCRYPTION_ALGORITHMS
#define ENCRYPTION_ALGORITHMS

/*
 *  Every encryption algorithm we implement must include an init(char*)
 *  function that returns a crypt type structure which is defined below
 */
typedef struct {
    const char* name;
    FILE* encrypt(FILE*, char*);
    FILE* decrypt(FILE*, char*);
} crypt;

crypt* init(const char*);

#endif // ENCRYPTION_ALGORITHMS
