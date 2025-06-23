#include <bits/stdc++.h> 
vector<pair<char,int>> duplicate_char(string s, int n){
    unordered_map<char,int> freq;
    for(int i=0;i<n;i++){
        freq[s[i]]++;
    }
    vector<pair<char,int>> ans;
    for(auto const& it : freq){
        char key = it.first;
        int val = it.second;
        if(val >= 2){
            ans.push_back(make_pair(key, val));
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
