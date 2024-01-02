#include <iostream>
using namespace std;

int power(int num1, int num2) {
    int ans = 1;
    for(int i = 1; i <= num2; i++){
        ans = ans * num1;
    }
    return ans;
}

int factorial(int a){
    int fact = 1;
    for(int i = 1; i <= a; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int a, int b){
    if (a < b) {
        // Handle invalid input, e.g., return an error code or throw an exception.
        return 0;
    }
    int num = factorial(a);
    int denom = factorial(b) * factorial(a-b);
    return num/denom;
}
    // Function Signature
void printcounting(int num) {
    // Function body
    for(int i = 1; i <= num; i++){
        cout << i << " ";
    }
}

int main() {

    int a = 5;
    int b = 3;

    // cout << "Power is " << power(a, b) << endl;

    // find nCr formula is nCr = n!/r!* (n-r)!
    int n = 8, r = 6;
    // cin>> n >> r ;

    cout <<" Answer is " << nCr(n,r) << endl;

    // Counting problem
    
    // Function call
    printcounting(n);

    return 0;
}









