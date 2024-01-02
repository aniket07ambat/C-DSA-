#include<iostream>
using namespace std;
/*
int AP(int n)
{
    int ans = 3 * n + 7;
    return ans;
}

int setbits(int n)
{
    int count = 0;
    while(n != 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    // int n;
    // cin >> n;
    // int ans = AP(n);
    // cout << ans << endl;

    int a = 7;
    int b = 5;

    int ans = setbits(a) + setbits(b);
    cout << ans << endl;

    return 0;
}

*/
/*
// setbits problem  using Brian Kernighan's algorithm for counting set bits. 
int setbits(int n) {
    int count = 0;
    while (n != 0) {
        // If n is ...1000, then n - 1 is ...0111, and the AND operation clears the rightmost set bit.
// This operation is repeated until all set bits are cleared, and the loop counts the number of iterations.
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main() {
    int a = 7;
    int b = 5;

    int ans = setbits(a) + setbits(b);
    cout << ans << endl;

    return 0;
}

*/

// fibonacci problem

int Fibo(int n) {
    if(n == 1)
        return 1;
    if(n == 0)
        return 0;
    int ans = Fibo(n - 1) + Fibo(n - 2);
    return ans;
}

int main()
{
    int n = 6;
    int ans = Fibo(n);
    cout << ans << endl;
}





