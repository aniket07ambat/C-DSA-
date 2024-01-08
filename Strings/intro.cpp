#include <iostream>
#include <math.h>
using namespace std;





int getLength(char ch[])
{
    int count = 0;
    for(int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[], int length)
{   
    int s = 0;
    int e = length - 1;
    while(s <= e){
        // swap(name[s], name[e]);
        // s++;
        // e--;
        swap(name[s++], name[e--]);

    }
}

int main() {

    char name[20] = {'A','N', 'I', 'K', 'E', 'T'};

    // Null character '\0' used to indicate the end of a string. When a string is created, it is automatically terminated with a null character.

    // cout << "Enter your name ";
    // cin >> name;
  
    cout << "Your name is ";
    cout << name << endl;

    int len = getLength(name);
    cout << " Length: " << len << endl;

    reverse(name, len);
    cout << name << endl;

    return 0;
}










