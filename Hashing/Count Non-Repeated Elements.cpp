
int countNonRepeated(int a[], int n){
      unordered_map<int,int>m;
      int c=0;
      for(int i=0;i<n;i++){
        m[a[i]]++;
      }
      for(auto i:m){
        if(i.second==1){
            c++;
        }
      }
     return c;
}