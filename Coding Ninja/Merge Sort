#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    vector<int> leftArr(leftSize);
    vector<int> rightArr(rightSize);

    for (int i = 0; i < leftSize; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < rightSize; i++) {
        rightArr[i] = arr[mid + 1 + i];  
    }

    int i = 0, j = 0, k = left;

    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    while (i < leftSize) {
        arr[k++] = leftArr[i++];
    }
    while (j < rightSize) {
        arr[k++] = rightArr[j++];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        mergeSort(arr, 0, n - 1);

        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
