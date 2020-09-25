/*
vector<int> duplicates(int a[], int n) {
    map<int,int>m;
    int i;
   bool flag = false;
  vector<int>res;
    for(i=0;i<n;i++)
    m[a[i]]++;
    for(auto it:m){
        if(it.second>1){
         res.push_back(it.first);
         flag = true;
          }
         }
if (!flag) res.push_back(-1);
    return res;  
    
}
*/
vector<int> duplicates(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int index = a[i] % n;
        a[index] += n;
    }
    bool flag = false;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if ((a[i] / n) > 1) {
            ans.push_back(i);
            flag = true;
        }
    }
    if (!flag) ans.push_back(-1);
    return ans;
}
