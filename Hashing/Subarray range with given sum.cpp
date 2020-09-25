int subArraySum(int a[], int n, int sum){
      unordered_map<int ,int >m;
      int pre_sum=0;
      int c=0;
      for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(pre_sum==sum)
            c++;
        if(m.find(pre_sum-sum)!=m.end())
           c+= m.find(pre_sum - sum)->second; 
            m[pre_sum]++;
      }
    return c;
}