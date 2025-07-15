#include <bits/stdc++.h> 
vector<vector<int>> leftRotationsOfArray(vector<int> nums, vector<int> queries) {
    vector<vector<int>> ans;
    for(int i=0;i<queries.size();i++){
        vector<int> temp = nums;
        int k = queries[i] % temp.size(); 

        reverse(temp.begin(), temp.begin() + k);
        reverse(temp.begin() + k, temp.end());
        reverse(temp.begin(), temp.end());


        ans.push_back(temp);
    }
    return ans;
}
