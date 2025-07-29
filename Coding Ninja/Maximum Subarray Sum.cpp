#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> nums, int n)
{
    long long maxsum = 0; 
    long long currsum = 0;

    for (int i = 0; i < n; i++) {
        currsum += nums[i];
        maxsum = max(maxsum, currsum);

        if (currsum < 0)  
            currsum = 0;
    }

    return maxsum;
}
