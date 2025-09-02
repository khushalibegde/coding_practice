class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        int top = 0, left = 0, bottom = n-1, right = n-1;
        vector<vector<int>> ans(n, vector<int>(n, 0));

        int idx =1;

        while(top<=bottom && right>=left){
            for(int i=left;i<=right;i++){
                ans[top][i] = idx++;
            }

            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right] = idx++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans[bottom][i]=idx++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans[i][left] = idx++;
                }
                left++;
            }
        }
        return ans;
    }
};
