// Implement Queue using array

void MyQueue :: push(int x){
     arr[rear++]=x;   

}

int MyQueue :: pop(){
       if(rear==front)
       return -1;
      return arr[front++];     
}


// Operations on queue 

 // Function to push element on rear of queue
void enqueue(queue<int> &s,int x){
       s.push(x);
}
 // Function to remove front element from queue
void dequeue(queue<int> &s){
       s.pop();
}
 // Function to find the front element of queue
int front(queue<int> &s){
       return s.front();
}
 // Function to find the element in queue. Return "Yes" or "No".
string find(queue<int> s, int val){
      bool f=0;
      while(!s.empty()){
      	int a=s.front();
      	s.pop();
      	if(a==val)
      		f=1;
      }
      if(f==1){
      	return "Yes";}
      	else{
      		return "No";
      	
      }
}


// Implement Queue using Linked List

void MyQueue:: push(int x){
      QueueNode *temp=new QueueNode(x);
      if(front==NULL){
      	front=rear=temp;
      }
      else{  
      rear->next=temp;
      rear=rear->next;
  }
}

/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop(){
	if(front == NULL) 
		return -1;
	else {
		int x = front->data;
		front = front->next;
		return x;
	}
}

// Queue Reversal

queue<long long int> rev(queue<long long int> q){
   stack<long long int>s;
   queue<long long int >que;
   while(!q.empty()){
   	s.push(q.front());
   	q.pop();
   }
   while(!s.empty()){
   	que.push(s.top());
   	s.pop();
   }
   return que;
}

// Queue using two Stacks

 /* The method push to push element into the queue */
void StackQueue :: push(int x){
      s1.push(x);  
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop(){
      if(s2.empty()){
      	if(s1.empty())
      		return -1;
      	while(!s1.empty()){
      		 int a=s1.top();
      		 s1.pop();
      		 s2.push(a);
      	}
      }         
       int k=s2.top();      
        s2.pop();
        return k;

}

// Generate Binary Numbers

vector<string> generate(ll n){
	vector<string>res;
	queue<string>q;
	q.push("1");
	while(n--){
		string s=q.front();
        q.pop();
        res.push_back(s);
        string s1=s;
        q.push(s.append("0"));
        q.push(s1.append("1"));

	}
	return res; 
}


// Reverse first K element of Queue

queue<ll> modifyQueue(queue<ll> q, int k){
 // if(q.empty()||k>q.size()||k<=0)
  	//return 0;
  stack<int>s;
  for(int i=0;i<k;i++){
  	s.push(q.front());
  	q.pop();
  }
  while(!s.empty()){
  	q.push(s.top());
  	s.pop();
  }
  for(int i=0;i<q.size()-k;i++){
  	q.push(q.front());
  	q.pop();
  }
  return q;
}