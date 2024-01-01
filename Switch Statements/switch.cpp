#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Today is Saturday";
        break;
    case 2:
        cout << "Today is Sunday";
        break;
    default:
        cout << "Today is Monday";
    }
    // https://www.w3schools.com/cpp/cpp_switch.asp

    // homework question
    // https://www.youtube.com/watch?v=8nNqk2NPbRA&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=8&t=1424s

    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    int Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 Rupee notes required are=" << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "No of 50 Rupee notes required are=" << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "No of 20 Rupee notes required are=" << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "No of 1 Rupee notes required are=" << Rs1 << endl;
        break;
    }

    return 0;
}