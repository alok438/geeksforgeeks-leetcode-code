bool checkPangram (string &s){
     int n=s.length();
     if(n<26)
     	return false;
     for(int i=0;i<n;i++){
     	s[i]=tolower(s[i]);
     }
     int alph[26]={0};
     for(int i=0;i<n;i++){
     	if(s[i]>='a'&& s[i]<='z'){
     		alph[s[i]-'a']++;
     	}
     }
     for(int i=0;i<26;i++){
     	if(alph[i]==0){
     		return false;
     	}
     	
     }
     return true;
}
