bool subArrayExists(int a[], int n){
    int pre_sum=0;
    unordered_map<int,bool>m;
    for(int i=0;i<n;i++){
     pre_sum+=a[i];
      if(pre_sum==0||m[pre_sum]==true)
          return true;
      m[pre_sum]=true;
  }
  return false;
}




bool subArrayExists(int a[], int n)
{
    int i,sum=0;
	   unordered_set<int>cur;
	for(i=0;i<n;i++){
       sum+=a[i];
   if(sum ==0||cur.find(sum)!=cur.end())
     return true;
   cur.insert(sum);
}
return false;   
        
}