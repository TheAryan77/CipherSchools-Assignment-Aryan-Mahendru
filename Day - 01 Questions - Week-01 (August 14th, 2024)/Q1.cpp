#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    
    string cs = str1 + str2;
    cout << "Concatenated string: " << cs << endl;
    
    return 0;
}