class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> arr;
        int n = nums.size(); 
    
        for (int num : nums) {
            freq[num]++;
        }

        for (auto &p : freq) {
            if (p.second > n / 3)
                arr.push_back(p.first);
        }
    
        return arr;
    }
};
