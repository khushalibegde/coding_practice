#include <bits/stdc++.h>
using namespace std;

long long calculateMaximisedSum(vector<int>& arr1, vector<int>& arr2, int n) {
    vector<vector<long long>> dp(n, vector<long long>(2, 0));

    dp[0][0] = abs(arr1[0] - arr2[0]);
    dp[0][1] = abs(arr2[0] - arr1[0]);

    for(int i = 1; i < n; i++) {
        dp[i][0] = max(
            dp[i-1][0] + abs(arr1[i] - arr2[i]) + abs(arr1[i] - arr2[i-1]),
            dp[i-1][1] + abs(arr1[i] - arr2[i]) + abs(arr1[i] - arr1[i-1])
        );
        dp[i][1] = max(
            dp[i-1][0] + abs(arr2[i] - arr1[i]) + abs(arr2[i] - arr2[i-1]),
            dp[i-1][1] + abs(arr2[i] - arr1[i]) + abs(arr2[i] - arr1[i-1])
        );
    }
    return max(dp[n-1][0], dp[n-1][1]);
}
