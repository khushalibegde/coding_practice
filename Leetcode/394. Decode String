#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s)
    {
        stack<string> strStack;
        stack<int> cntStack;
        int n = s.length();
        int cnt = 0;
        string curr = "";

        for(int i = 0; i < n; i++) {
            char ch = s[i];

            if(isdigit(ch)) {
                cnt = cnt * 10 + (ch - '0');
            }
            else if(ch == '[') {
                cntStack.push(cnt);
                strStack.push(curr);
                curr = "";
                cnt = 0;
            }
            else if(ch == ']') {
                string temp = curr;
                curr = strStack.top();
                strStack.pop();

                int repeat = cntStack.top();
                cntStack.pop();

                while(repeat--) curr += temp;  
            }
            else {
                curr += ch;
            }
        }
        return curr;
    }
};
