#include <bits/stdc++.h> 
int count(int n,vector<int>& heights,vector<int>& dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){return dp[n];}

    int left= count(n-1,heights,dp)+abs(heights[n-1]-heights[n]);
    int right = INT_MAX;
    if(n>1){
        right= count(n-2,heights,dp)+abs(heights[n-2]-heights[n]);
    }
    return dp[n] = min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1,-1);
    return count(n-1,heights,dp);
}
