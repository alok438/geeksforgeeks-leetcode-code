pair <string,int> winner(string a[],int n){
     unordered_map<string,int>m;
     int maxi=-1;
     string res="";
     for(int i=0;i<n;i++){
        m[a[i]]++;
     }
     for(auto i:m){
        if(i.second>maxi){
            maxi=i.second;
            res=i.first;
        }
        else if(i.second==maxi && res.compare(i.first)>0)
            res=i.first;
     }
     return pair<string,int>(res,maxi);
}