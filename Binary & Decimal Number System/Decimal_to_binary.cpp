#include<iostream>
#include<math.h>
using namespace std;

int main() {
    // Decimal to binary
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    /*
    This is wrong code.
    int ans = 0;
    int i = 0;
    while(n != 0) {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "binary number is " << ans << endl;*/
    /*int ans = 0;
    int base = 1; // To keep track of the current power of 10

    while (n > 0) {
        int bit = n % 2;
        ans = ans + bit * base;
        n = n / 2;
        base = base * 10;
    }

    cout << "Binary number is " << ans << endl;*/

    // How to convert a negative number into binary number.
    
    // Decimal to binary

    if (n < 0) {
        // Handle negative numbers using Two's complement
        int positiveEquivalent = abs(n);
        int ans = 0;
        int base = 1;

        while (positiveEquivalent > 0) {
            int bit = positiveEquivalent % 2;
            ans = ans + bit * base;
            positiveEquivalent = positiveEquivalent / 2;
            base = base * 10;
        }

        // Add the sign bit (1 for negative)
        ans = ans + base;

        cout << "Binary number is " << ans << endl;
    } else {
        // Handle positive numbers as before
        int ans = 0;
        int base = 1;

        while (n > 0) {
            int bit = n % 2;
            ans = ans + bit * base;
            n = n / 2;
            base = base * 10;
        }

        cout << "Binary number is " << ans << endl;
    }

    return 0;
}




