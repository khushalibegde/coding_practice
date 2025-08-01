#include <bits/stdc++.h>

int calc(int m, int n, vector<vector<int>>& dp){
	if(m==0 && n==0){
		return 1;
	}
	if(m<0 || n<0){return 0;}
	if(dp[m][n]!=-1){return dp[m][n];}
	
	int left = calc(m-1,n,dp);
	int right = calc(m,n-1,dp);

	return dp[m][n] = left+right;	
}

int uniquePaths(int m, int n) {
	vector<vector<int>> dp(m,vector<int>(n,-1));
	return calc(m-1,n-1,dp);
}
