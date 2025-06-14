class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        int i=0;
        int n= s.size();
        while(i<n){
            if(st.empty() || abs(st.top()-s[i])!=32){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
            i++;
        }
        string ans="";
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};
