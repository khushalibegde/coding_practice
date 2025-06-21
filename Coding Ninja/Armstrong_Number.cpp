#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    int temp = num;
    int n = to_string(num).size();
    int ans = 0;
    while(num>0){
        int rem = num%10;
        ans+=pow(rem,n);
        num/=10;
    }
    return (ans==temp);
}
