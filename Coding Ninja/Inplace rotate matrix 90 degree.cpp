#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &inputArray)
{
    int n = inputArray.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(inputArray[i][j],inputArray[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        int top = 0;
        int bottom = n-1;
        while(top<bottom){
            swap(inputArray[top][i],inputArray[bottom][i]);
            top++;
            bottom--;
        }
    }
}
