class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                int sum;
                if(j==0 || j==i){
                    sum = 1;
                }
                else{
                    sum = ans[i-1][j-1]+ans[i-1][j];
                } 
                temp.push_back(sum);
            }
            
            ans.push_back(temp);
        }
        return ans;
    }
};
