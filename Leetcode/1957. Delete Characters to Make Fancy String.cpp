class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int idx = 0;
    
        for(char c : s){
            if(ans.empty()){
                ans += c;
                idx++;
            }
            else{
                if(ans[idx - 1] != c){
                    ans += c;
                    idx++;
                }
                else{
                    if(idx >= 2 && ans[idx - 2] != c){
                        ans += c;
                        idx++;
                    }
                    else if(idx <2){
                        ans+=c;
                        idx++;
                    }
                }
            }
        }
        return ans;
    }
};
