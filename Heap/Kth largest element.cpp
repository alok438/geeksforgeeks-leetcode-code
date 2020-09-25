int kthSmallest(int a[], int n, int k){
    priority_queue<int, vector<int>>q;
    for (int i = 0; i < n; ++i){
    	if(q.size()==k && q.top()>a[i]){
    			q.pop();
    			q.push(a[i]);
    		} 
            else if(q.size() < k){
                q.push(a[i]);
            }
    }
    return q.top();
}


// wrong ansewr

int kthSmallest(int a[], int n, int k){
    priority_queue<int,vector<int>, greater<int>>q;
    for (int i = 0; i < n; ++i){
    	if(q.size()==k && q.top()<a[i]){
    			q.pop();
    			q.push(a[i]);
    		} 
            else if(q.size() < k){
                q.push(a[i]);
            }
    }
    return q.top();
}