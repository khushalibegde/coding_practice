class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        sort(nums.begin(),nums.end());
        long long curr_max = 1;
        size_t idx = 0;
        int add = 0;

        while(curr_max<=n){
            if(idx<nums.size() && nums[idx] <= curr_max){
                curr_max += nums[idx];
                idx++;
            }
            else{
                curr_max += curr_max;
                add++;
            }
        }
        return add;
    }
};
