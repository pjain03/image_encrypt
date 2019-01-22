/*
 * Author: Pulkit Jain
 * 12/25/2018
 *
 * Structure we will use to export all our encryption algorithms
 */

#ifndef ENCRYPTION_ALGORITHMS_CRYPT
#define ENCRYPTION_ALGORITHMS_CRYPT
#define STB_IMAGE_IMPLEMENTATION

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../utilities/stb/stb_image.h"

/*
 * Every encryption algorithm we implement must include a version of the
 * init function that returns a crypt type structure which is defined below
 *  
 * name: name of the algorithm
 * encrypt: fn to read image from src, encrypt it with key, and write to dst
 * decrypt: fn to read image from src, decrypt it with key, and write to dst
 */
typedef struct {
    const char* name;
    void (*encrypt) (char* src, char* dst, char* key);
    void (*decrypt) (char* src, char* dst, char* key);
} crypt;

#endif // ENCRYPTION_ALGORITHMS_CRYPT
