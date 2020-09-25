const int CHAR=256;
bool isAnagram(string c, string d){
     int n=c.length();
     int m=d.length();
     if(n!=m)  
     	return false;
     int count[CHAR]={0};
     for(int i=0;i<=n;i++){
     	count[c[i]-'a']++;
     	count[d[i]-'a']--;
     }
     for(int i=0;i<CHAR;i++)
     	if(count[i]!=0)
     		return false;
        return true;
}