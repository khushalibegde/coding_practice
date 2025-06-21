string kthChildNthGeneration(int n, long long int k)
{
	if(n==1 || k==1){
		return "Male";
	}

	string parent = kthChildNthGeneration(n-1,(k+1)/2);
	if(parent == "Male"){
		if(k%2==0){
			return "Female";
		}
		else{
			return "Male";
		}
	}
	else{
		if(k%2!=0){
			return "Female";
		}
		else{
			return "Male";
		}
	}
}
