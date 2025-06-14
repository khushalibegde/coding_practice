#include <bits/stdc++.h> 
class Stack
{
    deque<int>dq;
public:
    Stack()
    {
    }
    bool push(int x)
    {
        dq.push_back(x);
        return true;
    }
    int pop()
    {
        if (dq.empty())
            return -1;
        int top_elem = dq.back();
        dq.pop_back();
        return top_elem;
    }
    int top()
    {
        return dq.empty() ? -1 : dq.back(); 
    }
    bool isEmpty()
    {
        return dq.empty();
    }
    int size()
    {
        return dq.size();
    }
};
