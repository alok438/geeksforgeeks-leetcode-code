int minIndexChar(string s, string p){
  unordered_map<char,int>m;
  int n=s.length();
  int l=p.length();
  int minIndex=INT_MAX;
  for(int i=0;i<n;i++){
  	 if (m.find(s[i]) == m.end())
	 	m[s[i]] = i;
		//m[s[i]]++;
  }
  for(int i=0;i<l;i++)
  	if(m.find(p[i])!=m.end() && m[p[i]]<minIndex)
  		minIndex=m[p[i]];
    if(minIndex!=INT_MAX)
    	return minIndex;
    else
    	return -1;
  
}