vector <int> findPairs(int a[], int n) 
{ 
    vector<int>res; 
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        if(m[abs(a[i])]==0){
            m[abs(a[i])]=1;
        }
        else{
           res.push_back((-1)*abs(a[i]));
           res.push_back(abs(a[i]));
           m[abs(a[i])]=0;

        }

    }
  return res;
}


// wrong answer
  vector <int> findPairs(int a[], int n) {
    unordered_map<int,int>m;
   vector<int>v;
    int maxi=0;
    int mini=0;
    for(int i=0;i<n;i++){
        a[i]=abs(a[i]);
        m[a[i]]++;
    }
    for(auto i:m){
        if(i.second==2){
         v.push_back(-1*(i.first));
         v.push_back(i.first);
        }
    }
   return v; 
}