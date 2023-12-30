#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i; // sum = sum + i;
    }
    cout << sum << endl;

    // Fibonacci series  n = (n-1) + (n-2);
    n = 10;
    int a = 0;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        int nextnumber = a + b;
        cout << nextnumber << " ";
        a = b;
        b = nextnumber;
    }
    cout << endl;
    // Prime number or not
    n = 15;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        // rem 0 so not prime number
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        cout << "prime number: " << n << endl;
    }
    else
    {
        cout << "not prime number: " << n << endl;
    }

    // Continue use
    for (int i = 0; i < 5; i++)
    {

        cout << " HI " << endl;
        cout << " Hey " << endl;
        continue;

        cout << "Reply toh karde " << endl;
    }

    return 0;
}
