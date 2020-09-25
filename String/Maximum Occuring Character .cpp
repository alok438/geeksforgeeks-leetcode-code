char getMaxOccuringChar(char* s)
{  
  map<char,int>m;
  int c=0;
  char res;
  for(int i=0;s[i]!='\0';i++){
       m[s[i]]++;
  }
    for(auto i:m){
        if(i.second>c){
        	c=i.second;
        	res=i.first
        }
    }
    return res;
}