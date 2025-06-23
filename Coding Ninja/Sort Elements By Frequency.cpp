#include <bits/stdc++.h>
using namespace std;

vector<int> sortByFrequency(vector<int>& nums){
    unordered_map<int,int> freq;
    vector<int> order;
    for(int x : nums){
        if(freq[x]++ == 0)
            order.push_back(x);
    }
    vector<pair<int,int>> vec;
    for(int x : order)
        vec.emplace_back(x, freq[x]);
    stable_sort(vec.begin(), vec.end(),
        [](const pair<int,int>& a, const pair<int,int>& b){
            return a.second > b.second;
        });
    vector<int> ans;
    for(auto& p : vec)
        ans.insert(ans.end(), p.second, p.first);
    return ans;
}
