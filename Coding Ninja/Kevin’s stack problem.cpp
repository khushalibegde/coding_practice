#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char> st;
	int n = s.length();
	for(int i=0;i<n;i++){
		st.push(s[i]);
	}
	string ans ="";
	while(!st.empty()){
		char c = st.top();
		ans.push_back(c);
		st.pop();
	}
	return ans;
}
