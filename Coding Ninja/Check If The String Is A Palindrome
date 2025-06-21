#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    string temp;
    for(auto c : s){
        if(isalnum(c)){
            temp+=c;
        }
    }
    int n = temp.length();
    for(int i=0;i<n;i++){
        char a = (char)tolower(temp[i]);
        char b = (char)tolower(temp[n-i-1]);
        if(a!=b){
            return false;
        }
    }
    return true;
}
