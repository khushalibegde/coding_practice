#include <bits/stdc++.h> 
bool duplicateParanthesis(string &expr)
{
    stack<char> st;
    for(int i=0;i<expr.size();i++){
        char ch = expr[i];
        if(ch == ')'){
            if(st.top()=='('){
                return true;
            }
            while(!st.empty() && st.top()!='('){
                st.pop();
            }
            st.pop();
        }
        else{
            st.push(ch);
        }
    }
    return false;
}
