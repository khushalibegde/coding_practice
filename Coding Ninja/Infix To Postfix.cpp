#include <bits/stdc++.h>
int precedence(char op){
	if(op == '^') return 3;
	if(op == '*' || op == '/') return 2;
	if(op == '+' || op == '-') return 1;
	return 0;
}
string infixToPostfix(string exp){
	string ans = "";
	stack<char> oper;
	for(int i=0;i<exp.length();i++){
		if(isalnum(exp[i])){
			ans+=exp[i];
		}
		else if(exp[i]=='('){
			oper.push(exp[i]);
		}
		else if(exp[i]==')'){
			while(!oper.empty() && oper.top()!='('){
				char c = oper.top();
				oper.pop();
				ans+=c;
			}
			oper.pop();
		}
		else{
			while(!oper.empty() && (precedence(oper.top())>=precedence(exp[i]))){
				char c = oper.top();
				oper.pop();
				ans+=c;
			}
			oper.push(exp[i]);
		}
	}
	while(!oper.empty()){
		char c = oper.top();
		oper.pop();
		ans+=c;
	}
	return ans;
}
