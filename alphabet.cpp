#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter alphabet: ";
    cin >> input;

    string vowels[5] = {"a", "e", "i", "o", "u"};
    bool isVowel = false;

    for (string v : vowels) {
        if (input == v) {
            isVowel = true;
            break;
        }
    }

    if (isVowel) {
        cout << "Vowel";
    } else {
        cout << "Consonant";
    }

    return 0;
}