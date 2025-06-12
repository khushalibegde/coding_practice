#include <bits/stdc++.h> 
vector<int> searchInTheArray(vector<int>& arr, vector<int>& queries, int n, int q)
{
	vector<int> ans(q,0);
	for(int i=0;i<q;i++){
		for(int j=0;j<n;j++){
			if(arr[j]<=queries[i]){
				ans[i]+=arr[j];
			}
		}
	}
	return ans;
}

