#include <bits/stdc++.h> 
vector<int> countTheNumber(vector<int> &nums, int n, int k) {
	unordered_map<int, int> freq;
    vector<int> arr;

    for (int num : nums) {
        freq[num]++;
    }
    for (auto &p : freq) {
        if (p.second >= n / k)
            arr.push_back(p.first);
    }

    return arr;
}
