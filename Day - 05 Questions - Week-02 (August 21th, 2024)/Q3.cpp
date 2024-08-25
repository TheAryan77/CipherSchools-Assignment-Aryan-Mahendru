#include <iostream>
#include <string>
using namespace std;

void countVowelsConsonants(string str) {
    int vowels = 0, consonants = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }
    
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    countVowelsConsonants(str);
    return 0;
}
