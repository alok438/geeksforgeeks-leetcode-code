long long int countSubarrWithEqualZeroAndOne(int a[], int n){
       for(int i=0;i<n;i++){
        if(a[i]==0)
            a[i]=-1;
       }
       unordered_map<int,int>m;
       long long c=0,pre_sum=0;
       m[0]++;
       for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(m.find(pre_sum)!=m.end()){
            c+=m[pre_sum];
        }
        m[pre_sum]++;
       }
       return c;
}