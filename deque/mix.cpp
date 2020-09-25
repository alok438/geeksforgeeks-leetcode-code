// Deque Implementations

  void push_back_pb(deque<int> &dq, int x){
    dq.push_back(x);
 }

 void pop_back_ppb(deque<int> &dq){
    if(!dq.empty())
       dq.pop_back();
    else
      return;
}
 int front_dq(deque<int> &dq){
    if(!dq.empty())
       return dq.front();
    else
       return -1;
} 
void push_front_pf(deque<int> &dq, int x){
    dq.push_front(x);
}

// Maximum of all subarrays of size k

vector <int> max_of_subarrays(int *a, int n, int k){
     vector<int>res;
     for(int i=0;i<n-k+1;i++){
     	int maxi=a[i];
     	for(int j=i+1;j<k+i;j++){    // TLE
     		maxi=max(a[j],maxi);
     	}
     	res.push_back(maxi);
     }
     return res;
}

 vector <int> max_of_subarrays(int *arr, int n, int k){
	vector<int>res;
	deque<int>q;
	for(int i=0;i<k;i++){     // for first k elemnt
       while((!q.empty())&& (arr[i]>= arr[q.back()]))
              q.pop_back();
       q.push_back(i);
	}

	for(int i=k;i<n;i++){       //   Rest of element 
         res.push_back (arr[q.front()]);
         while((!q.empty()) && (q.front()<=i-k))
         	q.pop_front();
         while((!q.empty()) && (arr[i]>=arr[q.back()]))
         	q.pop_back();
         q.push_back(i);
	}
	res.push_back (arr[q.front()]);
	q.pop_front();
	return res;
}

// Dequeue Traversal

void printDeque(deque<int>deq){
     int n=deq.size();
    for(auto i:deq)
       cout<<i<<" ";
}



// Rotate Deque By K

void left_Rotate_Deq_ByK(deque<int> &q, int n, int k){
    k = n-(k%n);
    for(int i = 1; i <= k; i++){
        int val = q.back();
        q.pop_back();
        q.push_front(val);
    }
}

void right_Rotate_Deq_ByK(deque<int> &q, int n, int k){
      k=(k%n);
      for(int i=1;i<=k;i++){
      	int val=q.back();
      	q.pop_back();
      	q.push_front(val);
      }
}

// Insertion in deque

deque<int> deque_Init(int a[], int n){
	deque<int>res;
  for(int i=0;i<n;i++){
  	res.push_back(a[i]);

  }    
  return res;
}


// Deque deletion

void eraseAt(deque <int> &d, int x){
 d.erase(d.begin()+x);   
}

void eraseInRange(deque<int> &d, int s, int n){
    d.erase(d.begin()+s,d.begin()+n); 
}

void eraseAll(deque<int> &d){
    d.clear();
}