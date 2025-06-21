#include <bits/stdc++.h> 
int maxStackSum(vector<int> &stack1, vector<int> &stack2, vector<int> &stack3) 
{
    int sum1 =0, sum2=0, sum3=0;
    for(int i=0;i<stack1.size();i++){
        sum1+=stack1[i];
    }
    for(int i=0;i<stack2.size();i++){
        sum2+=stack2[i];
    }
    for(int i=0;i<stack3.size();i++){
        sum3+=stack3[i];
    }
    int i = 0, j = 0, k = 0;

    while (i < stack1.size() && j < stack2.size() && k < stack3.size()) {
        if (sum1 == sum2 && sum2 == sum3) {
            return sum1;
        }
        if (sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= stack1[i++];
        } else if (sum2 >= sum1 && sum2 >= sum3) {
            sum2 -= stack2[j++];
        } else {
            sum3 -= stack3[k++];
        }
    }

    return 0;
}
