#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int nums[], int n) {
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
        if (freq[nums[i]] > n / 2)
            return nums[i];
    }

    return -1; 
}
