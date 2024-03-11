# Simple Substitution Cipher

This C++ program implements a simple substitution cipher, where each letter in the input text is replaced by a corresponding letter from a user-defined key.

## Usage

To use the program, follow these steps:

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Choose whether to encrypt or decrypt a sentence.
4. Enter the sentence to be encrypted or decrypted.
5. The program will output the result.

## Functionality

- The `create_key` function generates a new alphabet based on the user-provided key.
- The `simple_sub_cipher` function encrypts a given sentence using the generated key.
- The `simple_sub_decipher` function decrypts a given sentence using the generated key.

## Example

Enter A Sentence to Cipher: hello world
Encrypted Text: jyzzq qfxle


## Notes

- The program preserves the case of the input text and handles non-alphabetic characters by leaving them unchanged.
