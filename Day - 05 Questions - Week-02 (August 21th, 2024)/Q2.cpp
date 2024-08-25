#include <iostream>
#include <string>
using namespace std;

void reverseString(string str) {
    int n = str.length();
    for (int i = n - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: ";
    reverseString(str);
    return 0;
}
