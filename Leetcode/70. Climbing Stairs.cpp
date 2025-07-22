class Solution {
public:
    int count(int n, vector<int>& dp){
        if(n<=1){
            return 1;
        }
        int cnt;
        for(int i=2;i<=n;i++){
            if(dp[i]!=-1){
                cnt = dp[i];
            }
            else{
                cnt = count(i-1,dp)+count(i-2,dp);
            }
            dp[i] = cnt;
        }
        return cnt;
    }

    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return count(n,dp);
    }
};
