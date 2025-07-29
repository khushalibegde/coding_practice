#include <bits/stdc++.h> 
using namespace std;
long long maxSubSumKConcat(vector<int> &arr, int n, int k) {
    long long currentSum = 0, maxSum = LONG_MIN;
    for (int i = 0; i < n * min(k, 2); i++) {
        currentSum += arr[i % n];
        maxSum = max(maxSum, currentSum);
        if (currentSum <= 0) currentSum = 0;
    }
    if (k > 2) {
        long long totalSum = accumulate(arr.begin(), arr.end(), 0LL);
        if (totalSum > 0) {
            maxSum += (k - 2) * totalSum;
        }
    }
    return maxSum;
}
