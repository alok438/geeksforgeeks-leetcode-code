int findSum(string s){
	 string res="";
	 int sum=0;
	 for(auto i:s){
	 	if(isdigit(i))
	 		res+=i;
	 	else{
	 		sum+=atoi(res.c_str());
	 		res="";
	 	}
	 }
	 	return sum+atoi(res.c_str());
	 }
