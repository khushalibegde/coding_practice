class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(const int n : nums){
            mp[n]++;
        }
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1){
                ans+=nums[i];
            }
        }
        return ans;
    }
};
