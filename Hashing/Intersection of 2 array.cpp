int NumberofElementsInIntersection (int a[], int b[], int n, int m ){
     set<int>s;
     int c=0;
     for(int i=0;i<n;i++){
        s.insert(a[i]);
     }
     for(int i=0;i<m;i++){
        if(s.find(b[i])!=s.end()){
            
            s.erase(b[i]);
            c++;
        }
     }
     s.clear();
    return c;

}