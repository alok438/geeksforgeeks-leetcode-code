int modified(string a){
    int ans=0, same=1;
    for(int i=1;a[i];i++){
        if(a[i]==a[i-1]){
            same++;
        }
        else{
            ans+=(same-1)/2;
            same=1;
        }
    }
    
    ans += (same-1)/2;
    return ans;
}

int modified (string s){
 
	int n=s.length();
	int c=0;
	for(int i=0;i<n-2;i++){
		if(s[i]==s[i+1] && s[i]==s[i+2]){
			c++;
		    i++;
		}
	}
	return c;
}