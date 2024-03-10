#include <iostream>
#include <string>

using namespace std;

// initializing alphabets string
string alpha = "abcdefghijklmnopqrstuvwxyz";

// function that creates the new alphabet using the entered key
string create_key() {
    string ciphering, key; // initializing 2 string: ciphering is the new alphabet, key
    cout << "Enter Key:";       //prompt user to enter the key
    getline(cin, key);    // get the entered key by user

    // switch every character to lowercase
    for (auto &x: key) {
        x = tolower(x);
    }

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
    cout <<"Encrypted Text: "<< newline << endl;
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
    cout << "Decrypted Text: "<< newline << endl;
}


int main() {
    int c;
    cin>>c;
    cin.ignore(256, '\n');

    if (c==1){
        simple_sub_cipher();
    }else {
        simple_sub_decipher();
    }
    return 0;
}
