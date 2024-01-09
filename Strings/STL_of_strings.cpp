#include<string>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    string name = "Aniket";
    // cin >> name;
    cout << name << endl;

    // initialization
    string last = "";

    char firstchar = name[0];
    cout << firstchar << endl;

    char lastchar = name.back();
    cout << lastchar << endl;

    // Concatenations:
    name = name + " Jijabhau";   // name += " Jijabhau";
    cout << name << endl;

    string fullname = name + " Ambat";
    cout << fullname << endl;
    
    // Substring : Extract substring from 0 to 6;
    string subname = fullname.substr(0, 7); 
    cout << subname << endl;

    // Erasing and clearing
    fullname.erase(7,9); // Erase 9 characters starting from position 7
    cout << fullname << endl;

    subname.clear();
    cout << subname << endl;

    int length = fullname.length();
    cout << length << endl;

    // Comparision
    if(fullname == name)
        cout << "equal";
    else{
        cout << "not equal";
    }
    cout << endl;

    // Finding substrings
    int position = fullname.find("Ambat");
    cout << position << endl;  
    cout << fullname[7] << endl;

    // Iterating through characters
    for(char c : fullname){
        cout << c; 
    }
    cout << endl;

    for(auto c : fullname){
        cout << c; 
    }
    cout << endl;

    // reverse string
    reverse(fullname.begin(), fullname.end());
    cout << fullname << endl;
    

    // Conversions through C-style strings. [means with '\0' Null character]
    const char* cstyleString = fullname.c_str();
    cout << cstyleString << endl;

    return 0;
}
