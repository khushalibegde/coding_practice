#include <unordered_set>
int elementCount(vector<int>& A) {
    unordered_set<int> st(A.begin(), A.end());
    int count = 0;
    for (int i = 0; i < A.size(); i++) {
        if (st.find(A[i] + 1) != st.end()) {
            count++;
        }
    }
    return count;
}
