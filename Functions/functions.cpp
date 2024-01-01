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
    for(int i; i <= a; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int a, int b){
    int num = factorial(a);
    int denom = factorial(b) * factorial(a-b);
    return num/denom;
}

int main() {

    int a = 5;
    int b = 3;

    cout << "Power is " << power(a, b) << endl;

    // find nCr formula is nCr = n!/r!* (n-r)!
    int n, r;
    cin>> n >> r ;

    cout <<" Answer is " << nCr(n,r) << endl;
    return 0;
}









