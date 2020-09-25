vector<int> printNonRepeated(int a[],int n){
     unordered_map<int,int>m;
      vector<int>res;
     for(int i=0;i<n;i++){
        m[a[i]]++;
     }
     for(int i=0;i<n;i++){
        if(m[a[i]]==1){
            res.push_back(a[i]);
        }
     }
     return res;
}
/*
vector<int> printNonRepeated(int a[],int n){
     map<int,int>m;
      vector<int>res;
     for(int i=0;i<n;i++){
        m[a[i]]++;
     }
     for(auto i:m){
        if(i.second==1){
            res.push_back(i.first);
        }
     }
     return res;
}
*/