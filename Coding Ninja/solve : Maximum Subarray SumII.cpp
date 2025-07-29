#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int sum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = i; j < n; j++) {
            x += arr[j];
            if (sum < x) sum = x;
        }
    }
    cout << sum;
    return 0;
}
