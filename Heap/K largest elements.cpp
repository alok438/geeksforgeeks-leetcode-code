vector<int> kLargest(int a[], int n, int k){
    priority_queue<int,vector<int>, greater<int>>q;
    vector<int> res; 
    for (int i = 0; i < n; ++i){
    	if(q.size()==k){
    		if(q.top()<a[i]){
    			q.pop();
    			q.push(a[i]);
    		}
    	}
    	else 
    		q.push(a[i]);
    }
    while(!q.empty()){
    	res.push_back(q.top());
    	q.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}

//  
void kLargest(int arr[], int n, int k){
   priority_queue<int> q(arr,arr+n);
for(int i=0;i<k;i++) 
{
    cout<<q.top()<<" ";
 q.pop();
    
}
 cout<<endl;
 }

