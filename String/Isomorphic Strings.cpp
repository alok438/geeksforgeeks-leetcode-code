bool areIsomorphic(string s1, string s2){
    
    int n=s1.length();
    int m=s2.length();
    int a[256]={0};
    int b[256]={0};
    if(n!=m){
    	return false;
    }
    for(int i=0;i<n;i++){
    	if(a[s1[i]]!=b[s2[i]]){
    		return false;
    	}
    	a[s1[i]]++;
    	b[s2[i]]++;
   }
   return true;
}