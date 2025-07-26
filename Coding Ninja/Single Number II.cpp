#include <bits/stdc++.h>
int elementThatAppearsOnce(vector<int> arr) {
    unordered_map<int,int> m;
    for (int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for (int i=0;i<arr.size();i++){
        if (m[arr[i]]==1)
        	return arr[i];
    }
}
