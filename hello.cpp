#include<iostream>
using namespace std;

int a = 5; //global variable

void func()
{
    cout << a << endl;
}

int main() {
    cout << "Hello Aniket" << endl;
    cout << "Hello E" << endl;
    // This is single line comment
    /* This is
     muntiline 
     comment*/
    int a = 10; //local variable
    cout << a << endl;
    func();
    // Constants are unchangeable; when a constant variable is initialized in a program, its value cannot be changed afterwards.
    const float PI = 3.14;
    cout << "The value of PI is " << PI << endl;
    //PI = 3.00; //error, since changing a const variable is not allowed.
    int num;
    cout << "input a number" << endl;
    cin >> num;
    cout << num << endl;

    
    return 0;
}

