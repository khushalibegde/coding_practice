#include <iostream>
#include <unordered_map>
using namespace std;

void intersection(int *arr1, int *arr2, int size1, int size2) {
    unordered_map<int, int> freqMap;

    for (int i = 0; i < size2; i++) {
        freqMap[arr2[i]]++;
    }
    for (int i = 0; i < size1; i++) {
        if (freqMap[arr1[i]] > 0) {
            cout << arr1[i] << " ";
            freqMap[arr1[i]]--;
        }
    }

    cout << endl;
}
