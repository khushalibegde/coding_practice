#include <bits/stdc++.h> 
int occursOnce(vector<int> &a, int n){
	// Write your code here.
	int x = 0;
    for(int i=0;i<n;i++){
        x^=a[i];
    }
    return x;
}
