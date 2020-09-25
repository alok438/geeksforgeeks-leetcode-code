unordered_map<int, int> m;

bool sortByVal(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second == b.second) return a.first < b.first;
    
    return a.second > b.second;
}


vector<int> sortByFreq(int arr[],int n){
    
    vector<pair<int, int>> v;
    
    for(int i = 0;i<n;i++){
        m[arr[i]]++;
    }
    
    copy(m.begin(), m.end(), back_inserter(v));
    
    sort(v.begin(), v.end(), sortByVal);
    vector<int> ans;
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].second;j++){
            ans.push_back( v[i].first );
        }
    }
    m.clear();
    return ans;
}