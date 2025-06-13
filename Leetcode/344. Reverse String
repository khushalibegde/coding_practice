#include <bits/stdc++.h> 
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
	    int n = s.size();
	    for(int i=0;i<n;i++){
	    	st.push(s[i]);
	    }
        int idx = 0;
	    while(!st.empty()){
	    	char c = st.top();
	    	s[idx++] = c;
	    	st.pop();
	    }
    }
};
