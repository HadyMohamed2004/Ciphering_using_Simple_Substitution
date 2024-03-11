#include <iostream>
#include <string>

using namespace std;

// initializing alphabets string
string alpha = "abcdefghijklmnopqrstuvwxyz";

// function to check uniqueness of a given string
bool is_string_unique(string input) {
    // initialize boolean variable as true
    bool is_unique = true;

    for (int i = 0; i < input.length(); i++) {
        for (int j = i + 1; j < input.length(); j++) {
            // if a character is repeated
            if (input[i] == input[j]) {
                // set boolean variable to false
                is_unique = false;
                return is_unique;
            }
        }
    }

    return is_unique;
}


// function that creates the new alphabet using the entered key
string create_key() {
    string ciphering, key; // initializing 2 string: ciphering is the new alphabet, key
    bool is_unique = true;

    // Keep prompting until a unique key is entered
    do {
        cout << "Enter a unique Key:"; // prompt user to enter the key
        getline(cin, key); // get the entered key by user


        // switch every character to lowercase
        for (auto &x: key) {
            x = tolower(x);
        }

        // Check if the key is unique
        is_unique = true;
        for (int i = 0; i < key.length(); ++i) {
            for (int j = i + 1; j < key.length(); ++j) {
                if (key[i] == key[j]) {
                    is_unique = false;
                    break;
                }
            }
            if (!is_unique) {
                break;
            }
        }
        // check if key is 5 letters
        if (key.length() != 5) {
            cout << "Key must have exactly 5 characters." << endl;
            continue;
        }

        if (!is_unique) {
            cout << "Key is not unique. Please enter a key with distinct characters." << endl;
        }
    } while (!is_unique || key.length() != 5);


    //initialize the first part of new alphabet
    ciphering = key;

    // adding the rest of the alphabets
    for (int i = 0; i < 26; i++) {
        if (not key.contains(alpha[i])) { // using .contains to return whether the letter is in the key or not
            ciphering += alpha[i]; // the letter isn't in the key, add it
        }
    }
    return ciphering; // return new alphabet (encrypted)
}

void simple_sub_cipher() {
    // initializing ciphering alphabet, str (used to enter line), newline (string of encrypted line)
    string ciphering = create_key(), str, newline;

    //prompt user to enter a line tto cipher
    cout << "Enter A Sentence to Cipher:";
    getline(cin, str);


    // iterating through every character and switch
    for (char j: str) {
        j = tolower(j); // convert character to lower
        if (isalpha(j)) {  //check if the character is a letter
            // if character is a letter --> switch
            // using .find to find the real index of the letter and use it in encrypted alphabet
            newline += ciphering[alpha.find(j)];
        } else {  // if not a letter --> symbol or number --> add it as it is
            newline += j;
        }
    }
    // print the encrypted text
    cout << "Encrypted Text: " << newline << endl;
}


void simple_sub_decipher() {
    // initializing ciphering alphabet, str (used to enter line), newline (string of encrypted line)
    string ciphering = create_key(), str, newline;

    //prompt user to enter a line tto cipher
    cout << "Enter A Sentence to Cipher:";
    getline(cin, str);

    // iterating through every character and switch
    for (char j: str) {
        // convert character to lower
        if (isalpha(j)) {  //check if the character is a letter
            // if character is a letter --> switch
            // using .find to find the  index of the letter in the ciphered alphabet and use it in real alphabet
            newline += alpha[ciphering.find(j)];
        } else {    // if not a letter --> symbol or number --> add it as it is
            newline += j;
        }
    }
    // print the encrypted text
    cout << "Decrypted Text: " << newline << endl;
}


int main() {
    while (true) {
        cout << "choose 1 to cipher, 2 to decipher, 3 to exit";
        int choice;
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            simple_sub_cipher();
        } else if (choice == 2) {
            simple_sub_decipher();
        } else if (choice == 3) {
            cout << "Goodbyr" << endl;
            break;
        } else {
            cout << "enter a vaild input" << endl;
        }
    }
    return 0;
}
