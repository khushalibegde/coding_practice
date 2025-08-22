#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &inputArray)
{
    for(int i=0;i<inputArray.size();i++)
    {
        reverse(inputArray[i].begin(),inputArray[i].end());
    }

    for(int i=0;i<inputArray.size();i++)
    {
        for(int j=i+1;j<inputArray[0].size();j++)
        {
            swap(inputArray[i][j],inputArray[j][i]);
        }
    }
}
