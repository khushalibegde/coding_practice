#include <bits/stdc++.h>
using namespace std;
void twoNonRepeatingElements(int arr[], int n) {
    unordered_map<int, int> mp;
    vector<int> result;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (mp[arr[i]] == 1) {
            result.push_back(arr[i]);
        }
    }
    sort(result.begin(), result.end());
    cout << result[0] << " " << result[1] << endl;
}
