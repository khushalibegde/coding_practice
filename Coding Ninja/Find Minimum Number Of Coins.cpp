vector<int> MinimumCoins(int n)
{
    vector<int> coins ={1,2,5,10,20,50,100,500,1000};
    int sum = 0;
    vector<int> ans;
    for(int i=coins.size()-1;i>=0;i--){
        while(n >= coins[i]){
            n-=coins[i];
            ans.push_back(coins[i]);
        }
    }
    return ans;
}
