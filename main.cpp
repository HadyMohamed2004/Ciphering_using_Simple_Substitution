#include <iostream>
#include <string>

using namespace std;


int main() {

    string alpha = "abcdefghijklmnopqrstuvwxyz";


    string ciphering, str, key;
    cout << "Enter Key: " << endl;
    getline(cin, key);
    ciphering = key;


    cout << "Enter A Sentence to Cipher:";
    getline(cin, str);
    for (auto &x: key) {
        x = tolower(x);
    }

    for (int i = 0; i < 26; i++) {
        if (not key.contains(alpha[i])) {
            ciphering += alpha[i];
        }
    }
    string newline;

    //ciphering
    for (int j = 0; j < str.size(); j++) {
        if (isalpha(str[j])) {
            newline += ciphering[alpha.find(str[j])];
        }
        else{
            newline += str[j];
        }
    }

    return 0;
}
