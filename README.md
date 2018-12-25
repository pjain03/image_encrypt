# Image Encrypt
Library and app to encrypt/decrypt images

## Encryption Algorithms:
The following is a list of algorithms we provided in our project:
1. **[DEFAULT]** Randomized Encryption Algorithm:
    * Encryption:
        * Seed a random number generator using the key provided by the user
        * Shuffle the pixels in the input image by generating reassignments per pixel
    * Decryption:
        * Seed the random generator using the same key provided by the user as during encryption
        * Generate the same reassignments per pixel and shuffle back the encrypted image

## References
- [Gitignore](https://github.com/github/gitignore)
