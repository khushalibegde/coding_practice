#include <bits/stdc++.h> 
vector<int> findTheRange(int arr[], int n, int key){
	vector<int> ans(2,-1);
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			ans[0] = i;
			while(arr[i]==key){
				i++;
			}
			ans[1]= i-1;
		}
	}
	return ans;
}
