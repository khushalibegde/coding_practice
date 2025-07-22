#include <bits/stdc++.h> 
int sum(int n, vector<int>& nums, vector<int>& dp){
    if(n==0){
        return nums[n];
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=-1){return dp[n];}
    int pick = nums[n] + sum(n-2,nums,dp);
    int notPick = 0 + sum(n-1,nums,dp);

    return dp[n] = max(pick,notPick);
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n,-1);
    return sum(n-1,nums,dp);
}
