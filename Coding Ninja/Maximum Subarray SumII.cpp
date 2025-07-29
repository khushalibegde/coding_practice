#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int N) 
{
	long long maxsum = INT_MIN, currsum =0;
    for(int i=0; i<N;i++)
    {
        currsum += nums[i];
        maxsum = max(maxsum, currsum);
        if(currsum <= 0)
        {
            currsum = 0;
        }
    }
    return maxsum;
}
