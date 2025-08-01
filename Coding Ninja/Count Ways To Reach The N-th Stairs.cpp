#include <bits/stdc++.h> 
using namespace std;

int countDistinctWays(int n) {
    const int MOD = 1000000007;
    if(n == 0 || n == 1) return 1; 
    
    vector<int> dp(n+1, -1);
    dp[0] = 1; 
    dp[1] = 1;

    for(int i = 2; i <= n; i++){
        dp[i] = ( (long long)dp[i-1] + dp[i-2] ) % MOD;
    }

    return dp[n];
}
