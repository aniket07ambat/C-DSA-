#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "input a number " ;
    cin >> n;
    cout << "Your number is " << n;
    cout << endl;

    if(n > 10){
        cout << "bigger";
    }
    else if(n == 10){
        cout << "equal";
    }
    else{
        cout << "smaller";
    }
    cout << endl;
    cout << "use of if-else loop" << endl;

    cout << "Now use of while loop" << endl;
    // print numbers form 1 to n
    int a = 1;
    while(a <= n) {
        cout << a << " ";
        a = a + 1;
    }
    cout << endl;
    
    // print sum from 1 to n
    int b = 1;
    int c = 0;
    while(b <= n){
        cout << c << endl;
        c = c + b;
        b = b + 1;
    }
    cout << c << endl;

    // find sum of all even numbers from 1 to n
    int d = 1;
    int f = 0;
    while(d <= n){
        if(d % 2 == 0){
            f = f + d;
        }
        d = d + 1;
    }
    cout << "sum of even numbers " << f << endl;

    // fahrenheit to celsius c = 5/9(f - 32)
    float fahr;
    cin >> fahr;
    float cal = (5.0/9) * (fahr - 32);
    cout << fahr << "F = " << cal << "C" << endl;


    return 0;

}