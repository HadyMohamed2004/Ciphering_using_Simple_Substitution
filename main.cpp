#include <iostream>
#include <string>

using namespace std;


string alpha = "abcdefghijklmnopqrstuvwxyz";


string create_key() {
    string ciphering, key;
    cout << "Enter Key: " << endl;
    getline(cin, key);

    for (auto &x: key) {
        x = tolower(x);
    }

    ciphering = key;
    for (int i = 0; i < 26; i++) {
        if (not key.contains(alpha[i])) {
            ciphering += alpha[i];
        }
    }
    return ciphering;
}


void simple_sub_cipher() {

    string ciphering = create_key(), str, newline;

    cout << "Enter A Sentence to Cipher:";
    getline(cin, str);



//    cipher
    for (char j: str) {
        j = tolower(j);
        if (isalpha(j)) {
            newline += ciphering[alpha.find(j)];
        } else {
            newline += j;
        }
    }
    cout << newline << endl;
}


void simple_sub_decipher() {

    string ciphering = create_key(), str, newline;

    cout << "Enter A Sentence to Cipher:";
    getline(cin, str);


    for (char j: str) {
        j = tolower(j);
        if (isalpha(j)) {
            newline += alpha[ciphering.find(j)];
        } else {
            newline += j;
        }
    }
    cout << newline << endl;
}


int main() {

    simple_sub_decipher();

    return 0;
}
