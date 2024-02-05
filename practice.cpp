#include <bits/stdc++.h>
using namespace std;

int main() {

    int number, originalNumber, shiftedNumber;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "enter a valid 3-digit number : " << endl;
        return 1; 
    }

    originalNumber = number;


    shiftedNumber = ((number % 10) * 100) + (number / 10);

    cout << "Original Number: " << originalNumber << endl;
    cout << "Shifted Number: " << shiftedNumber << endl;

    return 0; 
}
