class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0;
        for(int i=0;i<chars.size();){
            const char ch = chars[i];
            int cnt = 0;
            while(i<chars.size() && chars[i]==ch){
                cnt++;
                i++;
            }
            chars[idx++] = ch;
            if(cnt>1){
                for(const char c : to_string(cnt)){
                    chars[idx++] = c;
                }
            }
        }
        return idx;
    }
};
