string rearrangeString(string s){    
	 unordered_map<char,int>m;
	 int max_freq=0;
	 int n=s.size();
	 for(int i=0;i<n;i++){
	 	m[s[i]]++;
	 }
	 for(int i=0;i<n;i++){
	 	if(m[s[i]]>max_freq)
	 		max_freq=m[s[i]];
	 }
	 if(max_freq<=(n- max_freq+1 ))
	 	return "ab";
    return "aa";
}