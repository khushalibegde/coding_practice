#include<bits/stdc++.h>

string prefixToInfixConversion(string &s){

    int i = 0;

    stack<string> st;

    for(int i = s.size()-1; i >= 0; i--){

        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){

            st.push(string(1, s[i]));

        }

        else{

            string t1 = st.top();

            st.pop();

            string t2 = st.top();

            st.pop();

            string con = '(' + t1 + s[i] + t2 + ')';

            st.push(con);

        }

    }

    return st.top();

    

}

