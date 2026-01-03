class Solution {
public:
    bool check_num(int i){
        int n = i;
        while(i>0){
            int ones_digit = i%10;
            if(ones_digit == 0 || n%ones_digit!=0){
                return false;
            }
            i/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(check_num(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
