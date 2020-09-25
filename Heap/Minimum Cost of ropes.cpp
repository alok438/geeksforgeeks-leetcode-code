long long minCost(long long a[], long long n) {
  priority_queue<long long, vector<long long>, greater<long long> > q(arr, arr + n); 
  long long res=0;
  while(q.size()>1){
  	long long a=q.top();
  	q.pop();
  	long long b=q.top();
  	q.pop();
  	res+=a+b;
  	q.push(a+b);
  }
  return res;
}
