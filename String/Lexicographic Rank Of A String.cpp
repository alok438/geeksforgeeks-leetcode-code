int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
bool uniqueCharacters(string str) { 
     int checker = 0; 
    for (int i = 0; i < str.length(); i++) { 
          int bitAtIndex = str[i] - 'a'; 
        if ((checker & (1 << bitAtIndex)) > 0) { 
            return false; 
        } 
        checker = checker | (1 << bitAtIndex); 
    } 
    return true; 
} 

int findRank(string S) {
 if(!uniqueCharacters(S)){
    return 0;
}
  int ans=1;
  int n=S.length();
  int mul=fact(n);
  int count[256]={0};
   for(int i=0;i<n;i++){
      count[S[i]]++;
  }
 for(int i=1;i<256;i++){
    count[i]+=count[i-1];
  }
 
  for(int i=0;i<n-1;i++){
      mul=mul/(n-i);
      ans+=count[S[i]-1]*mul;
      for(int j=S[i];j<256;j++){
        count[j]--;
    }
}

return ans%1000000007;
}