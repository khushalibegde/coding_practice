#include <bits/stdc++.h> 
string magicalString(string &s){
    stack<char> st;
    int i=0;
    int n= s.size();
    while(i<n){
        if(st.empty() || abs(st.top()-s[i])!=32) st.push(s[i]);
        else st.pop();
        i++;
    }
    string temp = "";
    while(!st.empty()){
        temp = st.top() + temp;
        st.pop();
    }
    return temp;
}
