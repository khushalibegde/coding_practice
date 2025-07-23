#include <bits/stdc++.h> 
int calc(int i,int j,vector<vector<int>>& grid, vector<vector<int>>& dp){
    if(i<0 || j<0){return INT_MAX;}
    if(i==0 && j==0){return grid[i][j];}
    if(dp[i][j]!=-1){return dp[i][j];}
    int left = calc(i-1,j,grid,dp);
    int right = calc(i,j-1,grid,dp);
    return dp[i][j] = grid[i][j] + min(left,right);
}
int minSumPath(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    return calc(n-1,m-1,grid,dp);
}
