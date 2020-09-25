// Implement stack using array

 void MyStack :: push(int x){
  
       top++;
       arr[top]=x;

}


int MyStack :: pop(){
    if(top==-1)
    	return -1;
  int  res=arr[top];
    top--;
    return res;

}

// Implement Stack using Linked List

void MyStack ::push(int x) {
	if(top==NULL){
		top =  new StackNode(x);
	}
	else{

     StackNode *temp = new StackNode(x);
      temp -> next = top;
      top=temp;
  }
}
 
int MyStack ::pop() {
	 StackNode *temp = top;
     if(top==NULL) {return -1;}
     else{
     	temp=temp->next;
       int res=top->data;
       delete(top);
        top=temp;
        
         
   return res;
}
}


// Removing Consecutive duplicates

string removeConsecutiveDuplicates(string s){
      string res="";
      stack<char>st;
      int n=s.size();
      st.push(s[0]);
      for(int i=1;i<n;i++){
      	if(s[i]==st.top())
      		continue;
      	else{
      		res+=st.top();
      		st.pop();
      		st.push(s[i]);
      	}
      }
     res+=st.top();
     return res; 
}

//Removing consecutive duplicates - 2

string removePair(string s){
     int n=s.size();
     string res="";
     stack<char>st;
     st.push(s[0]);
     for(int i=1;i<n;i++){
     	if(!st.empty() && s[i]==st.top()){
     		st.pop();
     		continue;
     	}
     else{
     	  st.push(s[i]);
     }
 }
         while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return ans;
    }

// Parenthesis Checker 

bool Checker(char a, char b){
	return ((a=='('&& b==')') ||(a=='{'&& b=='}')||(a=='['&& b==']'));
}
bool ispar(string x){
       stack<int>s;
       int n=x.size();
       for(int i=0;i<n;i++){
       	if(x[i]=='('||x[i]=='{'||x[i]=='['){
       		 s.push(x[i]);
       		}
       		else{
       			if(s.empty() || !Checker(s.top(),x[i]))
       				return false;
       			else
       				s.pop();
       		}
       } 
       return (s.empty()==true);
       //	return true;
       //else
       //	  return false;
}


//Implement two stacks in an array
void twoStacks :: push1(int x){
   if(top1<top2-1){
   	top1++;
   	arr[top1]=x;
   }
}
void twoStacks ::push2(int x){
   if(top1<top2-1){
   	top2--;
   	arr[top2]=x;
   }
}
int twoStacks ::pop1(){
      if(top1>=0){
      	int k=arr[top1];
      	top1--;
        return k;
      }
      else{
          return -1;
      }
}
int twoStacks :: pop2(){
      if(top2<size){
      	int k=arr[top2];
      	top2++;
        return k;
      }
       else{
          return -1;
      }
}




// Stack using two queues

/*
push(s, x): 
1 Enqueue x to q2
2 One by one dequeue everything from q1 and enqueue to q2.
3 Swap the names of q1 and q2
// Swapping of names is done to avoid one more movement of all elements from q2 to q1.

pop(s):
1 Dequeue an item from q1 and return it.
*/

void QueueStack :: push(int x){
     while(!q1.empty()){
     	int p=q1.front();
     	q1.pop();
     	q2.push(p);
     } 
  q1.push(x);
     while(!q2.empty()){
     	int p=q2.front();
     	q2.pop();
     	q1.push(p);
     }   
}
 
int QueueStack :: pop(){
     while(!q1.empty()){
     	int p=q1.front();
     	   q1.pop();
     	   return p;
     }            
     return -1;
}


// Get min at pop

stack<int> _push(int a[],int n){
    stack<int>s;
    s.push(a[0]);
    int i;
    for(i=1;i<n;i++){
    	if(s.top()<=a[i])
    		{ s.push(s.top()); }
    	else
    		{s.push(a[i]);}
    }
    return s;
}
 
void _getMinAtPop(stack<int>s){
    while(!s.empty()){
    	cout<<s.top()<<" ";
        s.pop();
    }
}

// Delete middle element of a stack

stack<int> deleteMid(stack<int>s,int n,int current){
    int middle = ceil(n/2.0);
    if(s.empty())
    	return -1;

}

// Infix to Postfix 

int comapre(char symbol){
	if(symbol=='^')
		return 3;
	else if(symbol=='*'||symbol=='/')
		return 2;
	else if(symbol=='+'|| symbol=='-')
		return 1;
	else
		return -1;
} 
string infixToPostfix(string str){
     stack<int>s;
     string res;
     int len=str.size(),i;
     s.push('N');
     for(i=0;i<len;i++){
       if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
       	res+=str[i];
       else if(str[i]=='(')
       	s.push('(');
       else if(str[i]==')'){
       	while(s.top()!='N'&&s.top()!='('){
       		char c = s.top();
       		s.pop();
       		res+=c;
       	}
       	if(s.top()=='('){
       		char c = s.top();
       		s.pop();
       	}
       }
       else {
       	while(s.top()!='N' && comapre(str[i])<=comapre(s.top())){
       		char c=s.top();
       		s.pop();
       		res+=c;
       	}
       	s.push(str[i]);
       }
   }
   while(s.top()!='N'){
   	char c= s.top();
   	s.pop();
   	res+=c;
   }
   return res;
}

//Evaluation of Postfix Expression

int evaluatePostfix(string &str){
     stack<int>s;
     int i,n=str.size();
     for(i=0;i<n;i++){
     	if(isdigit(str[i]))
     		s.push(str[i]-'0');
     	else {
     		int a=s.top();
     		s.pop();
     		int b=s.top();
     		s.pop();
     		switch(str[i]){
     			case '+': s.push(b+a);
     			break;
     	        case '-': s.push(b-a); 
     	        break;
     	        case '*': s.push(b*a); 
     	        break;
     	        case '/': s.push(b/a); 
     	        break;
     		}

     	}
     }
     return s.top();
}


// Stock span problem 

vector <int> calculateSpan(int a[], int n){
    stack<int>s;
    vector<int>res;
    s.push(0);
    for(int i=0;i<n;i++){
    	while(!s.empty()&& a[s.top()]<=a[i])
    		s.pop();
    	int span = (s.empty())?(i+1) : (i-s.top());
    	res.push_back(span);
    	s.push(i);
    }
    return res;
}

// Next larger element 

/*
vector <long long> nextLargerElement(long long a[], int n){
    stack<int>s;
    vector<long long >res;
    s.push(a[n-1]);
    res.push_back(-1);
    for(int i=n-2;i>=0;i--){
      while(!s.empty() && s.top()<=a[i])
      	s.pop();
      int nextgreater =(s.empty())? -1: s.top();
      res.push_back(nextgreater);
      s.push(a[i]);
    }
    reverse(res.begin(),res.end());
    return res;
}
*/
vector <long long> nextLargerElement(long long a[], int n){
    stack<long long int>s;
    vector<long long int>res(n);
    for(int i=n-1;i>=0;i--){
      while(!s.empty() && s.top()<=a[i])
      	s.pop();
      if (s.empty())
      	res[i]= -1;
      else
      	res[i]=s.top();

      s.push(a[i]);
    }
 
    return res;
}


//The Celebrity Problem


int getId(int M[MAX][MAX], int n){
    stack<int>s;
    int celebrity;
    for(int i=0;i<n;i++)
    	s.push(i);
    while(s.size()>=2){
    	int a=s.top();
    	s.pop();
    	int b=s.top();
    	s.pop();
    	if(M[a][b]==1)
    		// if i knows j -> i is not celebrity
    		s.push(b);
    	else
    		// if i doesnot know j -> j is not celebrity
    		s.push(a);
    }
    celebrity = s.top();
    s.pop();
    for(int i=0;i<n;i++){
    	if(i!= celebrity){
    		if(M[i][celebrity]==0|| M[celebrity][i]==1){
    			return -1;
    		}
    	}
    }
    return celebrity;
}