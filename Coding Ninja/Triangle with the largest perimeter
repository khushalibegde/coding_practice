#include <bits/stdc++.h> 
int maxPerimeterTriangle(vector<int>& arr, int n) {
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<n-2;i++){
        if(arr[i]<arr[i+1]+arr[i+2]){
            return arr[i]+arr[i+1]+arr[i+2];
        }
    }
    return 0;
}
