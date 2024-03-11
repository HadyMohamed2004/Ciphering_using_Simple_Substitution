# Simple Substitution Cipher

This C++ program implements a simple substitution cipher, where each letter in the input text is replaced by a corresponding letter from a user-defined key. The key must be unique and consist of exactly 5 distinct characters.

## Installation

This program is written in C++. To run the program, you need a C++ compiler. No additional dependencies are required.

## Usage

Compile the program using a C++ compiler and run the executable. Follow the on-screen instructions to either cipher or decipher a text.

## Functionality

- `is_string_unique`: Checks if a given string contains unique characters.
- `create_key`: Generates a new alphabet based on the user-provided key. The key must be unique and consist of exactly 5 distinct characters.
- `simple_sub_cipher`: Encrypts a given sentence using the generated key.
- `simple_sub_decipher`: Decrypts a given sentence using the generated key.

## Example

Choose 1 to cipher, 2 to decipher, 3 to exit: 1
Enter a unique Key: test
Enter A Sentence to Cipher: hello world
Encrypted Text: itwwa abxva

## Notes

- The program ensures that the key entered by the user is unique and consists of exactly 5 distinct characters.
- The key is used to create a new alphabet for encryption and decryption.
- To exit the program, the user can choose option 3.
