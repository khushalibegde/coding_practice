#include <bits/stdc++.h> 
vector<long long> problemSelection(vector<int> A, int K)
{
	int n = A.size();
	vector<long long> ans(2,0);
	sort(A.begin(),A.end());
	int max_sum = 0;
	int min_sum = 0;
	int to_ans = (n+K)/(K+1);
	for(int i=0;i<to_ans;i++){
		min_sum+=A[i];
	}
	for(int i=0;i<to_ans;i++){
		max_sum+=A[n-i-1];
	}
	ans[1] = max_sum;
	ans[0] = min_sum;
	return ans;
}
