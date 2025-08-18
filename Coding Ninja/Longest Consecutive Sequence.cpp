int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    if(n == 1){
        return 1;
    }
    sort(arr.begin(), arr.end());
    int i = 0 ; int num = arr[i+1] ;
    int l = 0 ; int count = 0;
    while(i<n){
        if(arr[i]== num){
            i++;
            num = arr[i+1];
            continue;
        }
        if(arr[i]+1 == num){
            count++;
        }
        else{
            count = 0;
        }
        l= max( l , count);
        i++;
        num = arr[i+1];
    }
    return (l+1);
}
