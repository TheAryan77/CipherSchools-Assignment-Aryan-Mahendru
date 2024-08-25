#include <iostream>
using namespace std;

void checkOddEven(int n) {
    if (n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    checkOddEven(n);
    return 0;
}