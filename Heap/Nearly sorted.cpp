vector <int> nearlySorted(int a[], int n, int k){
    priority_queue<int,vector<int>, greater<int>>q;
    vector<int> res; 
    for(int i=0;i<n;i++){
    	q.push(a[i]);
    }
    for(int i=0;i<n;i++){
    	res.push_back(q.top());
    q.pop();
    }
    return res;
}