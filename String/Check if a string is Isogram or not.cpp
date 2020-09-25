bool isIsogram(string s)
{
  // map<string,int>m;
  int m[26]={0};
   int n=s.length();
   for(int i=0;i<n;i++){
       m[s[i]-'a']++;
   
    if(m[s[i]-'a']>1)
        return false;
      
    }
    return true;
}