#include<string>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    //https://chat.openai.com/share/da562d7c-37f4-45b8-bd33-2f79900ffc6c 
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans = "";
        string temp = "";

        for(int i = S.length()-1; i >= 0; i--){
            if(S[i] == '.'){
                reverse(temp.begin(), temp.end());
                ans += temp;
                ans.push_back('.');
                temp = "";
            }
            else{
                // temp = S[i];
                temp.push_back(S[i]);
            }
        }
        reverse(temp.begin(), temp.end());
        ans += temp;
        return ans;
    } 
};


