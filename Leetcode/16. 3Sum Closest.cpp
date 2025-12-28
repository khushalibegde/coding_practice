class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min_diff = INT_MAX;
        int ans = 0;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int j = i+1;
            int k = nums.size()-1;

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                int dif = abs(sum-target);
                if(min_diff>dif){
                    ans = sum;
                    min_diff = min(dif,min_diff);
                }
                
                if(sum == target){
                    return sum;
                }
                if(sum > target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};
