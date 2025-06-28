#include <bits/stdc++.h>
int canYouMakeDifference(int n, string &s) {
    string t = s;
    sort(t.begin(),t.end());
    if(s==t){
        reverse(t.begin(),t.end());
        if(s==t){
            return 0;
        }
        return 1;
    }
    else{
        return 1;
    }
}
