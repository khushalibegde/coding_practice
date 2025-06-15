#include <bits/stdc++.h> 
void insert(stack<int> &s,int num_top){
	if(s.empty() || (!s.empty() && (s.top()<num_top))){
		s.push(num_top);
		return;
	}
	int curr_top = s.top();
	s.pop();
	insert(s,num_top);
	s.push(curr_top);
}
stack<int> sortStack(stack<int> &s)
{
	if(s.empty()){
		return s;
	}
	int num_top = s.top();
	s.pop();
	sortStack(s);

	insert(s,num_top);
	return s;
}
