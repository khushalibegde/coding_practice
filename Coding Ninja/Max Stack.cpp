#include <bits/stdc++.h>
class MaxStack {
private:
    stack<int> st;
    stack<int> maxSt;

public:
    MaxStack() {}

    void specialPush(int value) {
        st.push(value);
        if (maxSt.empty() || value >= maxSt.top()) {
            maxSt.push(value);
        }
    }

    int specialPop() {
        if (st.empty()) return -1;
        int top = st.top();
        st.pop();
        if (top == maxSt.top()) {
            maxSt.pop();
        }
        return top;
    }

    int specialTop() {
        if (st.empty()) return -1;
        return st.top();
    }

    int specialMax() {
        if (maxSt.empty()) return -1;
        return maxSt.top();
    }
};
