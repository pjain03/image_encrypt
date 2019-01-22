# Image Encrypt
Library and app to encrypt/decrypt images

## Encryption Algorithms:
Each implemented encryption algorithm is responsible for reading from the source
and writing to the destination. We use the [stb](https://github.com/nothings/stb) library by default.
The following is a list of algorithms we provided in our project:

### Randomized Encryption Algorithm:
This is our default encryption algorithm.
* Encryption:
    * Seed a random number generator using the key provided by the user
    * Shuffle the pixels in the input image by generating reassignments per pixel
* Decryption:
    * Seed the random generator using the same key provided by the user as during encryption
    * Generate the same reassignments per pixel and shuffle back the encrypted image

## References
- [Gitignore](https://github.com/github/gitignore)
