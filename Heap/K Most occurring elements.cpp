struct compare { 
    bool operator()(pair<int, int> p1, pair<int, int> p2){
     if (p1.second == p2.second) 
            return p1.first < p2.first;  
        return p1.second < p2.second;    

} 
};
int kMostFrequent(int a[], int n, int k) { 
	 unordered_map<int, int>m;
	 int i;
	 for(i=0;i<n;i++){
	 	m[a[i]]++;
	 }
 priority_queue<pair<int,int>,vector<pair<int,int>>,compare>q(m.begin(),m.end());
 int res=0;
 for(i=1;i<=k;i++){
 	res+=q.top().second;
 	q.pop();
 }
 return res;

}