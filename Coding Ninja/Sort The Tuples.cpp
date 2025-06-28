#include <bits/stdc++.h> 

bool compare(const pair<vector<int>,int>& a,const pair<vector<int>,int>& b){
    if(a.first.back()!=b.first.back()){
        return a.first.back()<b.first.back();
    }
    else{
        return a.second < b.second;
    }
}
void sortTuples(vector<vector<int>>&arr){
    int n = arr.size();
    vector<pair<vector<int>,int>> ans;

    for(int i=0;i<n;i++){
        ans.push_back({arr[i],i});
    }
    sort(ans.begin(),ans.end(),compare);

    for(int i=0;i<n;i++){
        arr[i] = ans[i].first;
    }
}
