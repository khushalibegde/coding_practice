#include <bits/stdc++.h> 

int findSecondLargest(int n, vector<int> &arr)
{
    int largest = arr[0];
    int second = INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i]!=largest && arr[i]>second){
            second = arr[i];
        }
    }
    if(second==INT_MIN){
        return -1;
    }
    return second;
}
