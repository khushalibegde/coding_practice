vector<vector<int>> sol(function<int(int, int)> f, int z)
{
	int i=1, j=z;
	vector<vector<int>> ans;
	while(i<=z && j>=1){
		int val = f(i,j);
		if(val==z){
			ans.push_back({i,j});
			i++,j--;
		}
		else if(val<z){
			i++;
		}
		else{
			j--;
		}
	}
	return ans;
}
