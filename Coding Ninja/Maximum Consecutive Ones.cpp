int consecutiveOnes(vector<int>& nums){
    int maxCnt = 0;
    int curr = 0;
    for(int i : nums){
        if(i==1){
            curr++;
            maxCnt = max(maxCnt,curr);
        }
        else{
            curr=0;
        }
    }
    return maxCnt;
}
