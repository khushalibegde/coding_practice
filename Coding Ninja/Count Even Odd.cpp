#include <bits/stdc++.h> 
vector<int> countEvenOdd(vector<int> &arr, int n)
{
	unordered_map<int,int> freq;
	for(int i : arr){
		freq[i]++;
	}
	vector<int> ans(2,0);
	for(auto &it : freq){
		if(it.second%2==0){
			ans[1]++;
		}
		else{
			ans[0]++;
		}
	}
	return ans;
}
