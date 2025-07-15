class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        int max_freq = 0;
        int max_elem = 0;
        int flag = 0;
        for(const auto& e : freq){
            if(e.second==e.first){
                flag = 1;
                if(e.second>max_freq){
                    max_freq = e.second;
                    max_elem = e.first;
                }
            }
        }
        if(flag==1) return max_elem;
        else return -1;
    }
};
