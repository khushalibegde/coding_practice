int* printDivisors(int n, int &size){
    vector<int> ans;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
        }
    }
    size = ans.size();
    int* divisors = new int[size];
    for(int i=0;i<size;i++){
        divisors[i] = ans[i];
    }
    return divisors;
}
