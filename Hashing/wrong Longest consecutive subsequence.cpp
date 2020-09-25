int findLongestConseqSubseq(int a[], int n){
   int res=0,c=0;
   set<int>s;
   for(int i=0;i<n;i++){
       s.insert(a[i]);
   }
   sort(a,a+n);
   for(int i=0;i<s.size();i++){
    if(i>0&& s[i]==s[i-1]+1||...)
        {c++;}
    else
         c=1;

     res=max(res,c);
   }
   return res;
}