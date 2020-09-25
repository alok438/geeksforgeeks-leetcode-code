ll findSubarray(vector<ll> a, int n ) {
     ll pre_sum=0;
     ll c=0;
     unordered_map<int,int>m;
     for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(pre_sum==0){
            c++;
        }
        if(m.count(pre_sum)!=0){
            c+=m[pre_sum];           // count the  frquency of that element
        }
        m[pre_sum]++;
     }
     return c;
}
