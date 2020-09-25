void sortA1ByA2(int a[], int n, int b[], int m) {
      map<int,int>mp;
     for(int i=0;i<n;i++){
        mp[a[i]]++;
     }
int j=0;
for(int i=0;i<m;i++){
    while(mp[b[i]]>0){
        a[j++]=b[i];
        mp[b[i]]--;
    }
} 
for(auto i:mp){
    if(i.second>0){
        while(i.second>0){
            a[j++]=i.first;
            i.second--;
        }
    }
}
}