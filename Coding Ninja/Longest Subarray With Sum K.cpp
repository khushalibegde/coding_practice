#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& nums, int k) {
    unordered_map<long long,int> mp; 
    long long sum = 0;
    int len = 0;

    for(int i=0;i<nums.size();i++) {
        sum += nums[i];

        if(sum == k) len = max(len, i+1);

        if(mp.find(sum-k)!=mp.end()) {
            len = max(len, i - mp[sum-k]);
        }

        if(mp.find(sum)==mp.end()) {
            mp[sum] = i; 
        }
    }
    return len;
}
