#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    // Tip: here n is still decimal. Computer will takes it as decimal. in leetcode it is entirely possible to give number in string so take necessary apporach.

    // if n is in int
    int ans = 0;
    int i = 0;

    while(n > 0) {
        int digit = n % 10;
        if(digit == 1) {
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }
    cout << ans << endl;

    // if n is given in string

    /*int ans = 0; 
    int i = 0;
    while(n != 0) {
        int bit = n&1;
        if(bit == 1) {
            ans = ans + pow(2,i);
        }
        n = n >> 1;
        i++;
    }*/
    
    return 0;
}