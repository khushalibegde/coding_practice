#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    int rightmax = INT_MIN;
    vector<int> ans;
    for(int i = n - 1; i >= 0; i--) {
        if(elements[i] > rightmax) {
            rightmax = elements[i];
            ans.push_back(rightmax);
        }
    }
    sort(ans.rbegin(), ans.rend());
    return ans;
}
