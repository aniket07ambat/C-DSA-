#include<iostream>
using namespace std;

int main()
{
    int n = 5;

    // first pattern
    int r = 1;
    while(r <= n){
        int c = 1;
        while(c <= n){
            cout << "*";
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;
    // second pattern
    r = 1;
    int c = 1;
    while(r <= n){
        c = 1;
        while(c <= n){
            cout << r;
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // third pattern
    r = 1;
    c = 1;
    while(r <= n){
        c = 1;
        while(c <= n){
            cout << c;
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // fourth pattern
    r = 1;
    c = 1;
    while(r <= n){
        c = n;
        while(c > 0){
            cout << c;
            c = c - 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // fourth pattern : second method
    r = 1;
    c = 1;
    while(r <= n){
        c = 1;
        while(c <= n){
            cout << n - c + 1;
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // fifth pattern

    r = 1;
    c = 1;
    int a = 1;

    while(r <= n){
        c = 1;
        while(c <= n){
            
            cout << a;
            a = a + 1;
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // 6 pattern

    r = 1;
    c = 1;
    while(r <= n){
        c = 1;
        while(c <= r){
            cout << "*";
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // 7 pattern

    r = 1;
    c = 1;
    while(r <= n){
        c = 1;
        while(c <= r){
            cout << r;
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // 8 pattern

    r = 1;
    c = 1;
    int count = 1;
    while(r <= n){
        c = 1;
        while(c <= r){
            cout << count;
            c = c + 1;
            count = count + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // 9 pattern

    r = 1;
    c = 1;
    count = 1;
    while(r <= n){
        c = 1;
        count = r;
        while(c <= r){
            cout << count;
            c = c + 1;
            count = count + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // 10 pattern

    r = 1;
    c = 1;
    count = 1;
    while(r <= n){
        c = 1;
        count = r;
        while(c <= r){
            cout << count;
            c = c + 1;
            count = count - 1;
        }
        cout << endl;
        r = r + 1;
    }
    cout << endl;

    // 10 pattern : second method

    r = 1;
    while (r <= n)
    {
        int c = 1;
        while(c <= r){
            cout << (r - c + 1);
            c = c + 1;
        }
        cout << endl;
        r = r + 1;
    }
    
    // 11 pattern
    r = 1;
    while(r <= n){
        
        int c = 1;
        while(c <= n){
            char ch = 'A' + r - 1;
            cout << ch;
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

    // 12 pattern 

    r = 1;
    while(r <= n){
        char ch = 'A';
        int c = 1;
        while(c <= n){
            cout << ch;
            ch = ch + 1;
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;
    // we can also make a relation 'A' + j - 1 ---> second method

    // 13 pattern

    r = 1;
    char ch = 'A';
    while(r <= n){
        
        int c = 1;
        while(c <= n){
            cout << ch;
            ch = ch + 1;
            c = c + 1;
        }
        r = r + 1;
        cout << endl;
    }
    cout << endl;

     // 14 pattern
    n = 3;
    r = 1;
    ch = 'A';
    while(r <= n){
        
        int c = 1;
        while(c <= n){
            cout << ch;
            ch = ch + 1;
            c = c + 1;
        }
        ch = ch - r;
        r = r + 1;
        cout << endl;
    }
    cout << endl;



    return 0;
}