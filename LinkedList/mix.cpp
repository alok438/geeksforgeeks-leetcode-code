
//Display Linked List

vector<int> displayList(Node *head){
	vector<int>res;
	//Node *temp=head;
    while(head!=NULL){
    	res.push_back(head->data);
        head=head->next;
    }
    return res;
}

vector<int> displayList(Node *head){
	vector<int>res;
	Node *temp=head;
    while(temp!=NULL){
    	res.push_back(temp->data);
        temp=temp->next;
    }
    return res;
}

//Sum The Nodes of Linked List
 
int sumOfElements(Node *head){
   Node*curr=head;
   int sum=0;
  while(curr!=NULL){
       sum=sum + curr->data;
       curr=curr->next;
   }
   return sum;
}

// Count nodes of linked list

int getCount(struct Node* head){
	
     Node *curr=head;
     int c=0;
     while(curr!=NULL){
     	 c++;
     	 curr=curr->next;
     }
     return c;

}


// Maximum And Minimum In Linked List

int maximum(Node *head){
    int maxi=INT_MIN; 
    Node *curr=head;
    while(curr!=NULL){
    	if(curr->data>maxi)
    		maxi=curr->data;
    	curr=curr->next;
    }
    return maxi;
}

int minimum(Node *head){
    int mini=INT_MAX ;
   Node *curr=head;
    while(curr!=NULL){
    	if(curr->data<mini)
    		mini=curr->data;
    	curr=curr->next;
    }
    return mini;
}


// search in linked list
 
bool searchLinkedList(Node *head, int x){
    Node *curr=head;
    while(curr!=NULL){
    	if(curr->data==x){
    		return true;
    	}
    	else{
    		curr=curr->next;
    	}
    } 
    return false;
}

// Linked List Insertion

Node *insertAtBegining(Node *head, int newData) {
       Node *temp=new Node(newData);
       temp->next=head;
       return temp;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
       Node *temp=new Node(newData);
       if(head==NULL)
       	return temp;
       Node *curr=head;
     while(curr->next!=NULL)
     	 curr=curr->next;
     	 curr->next=temp;
     
     return head;
}

// Insert in Middle of Linked List

Node* insertInMiddle(Node* head, int x){
	// if list is empty
	if (head == NULL)
		return (new Node(x));
	else 
	{
		Node* temp = new Node(x);    // Make a new node
		Node* slow = head;
		Node* fast = head->next;        
		while (fast && fast->next) {  
			slow = slow->next;          // When fast will reach end, slow will be at the mid point
			fast = fast->next->next;    // Make fast moves two nodes at a time
		}
		temp->next = slow->next;     // Make the newNode next as slow next
		slow->next = temp;           // Make slow next as newNode
	}
	return head;
}


// Linked List Insertion At Position

void insertAtPosition(Node *head, int pos, int data){
    Node* temp = new Node(data);
    if(pos==1){
    	temp->next=head;
    	return temp;
    }
    Node *curr=head;
    for(int i=1;i<=(pos-2) && curr!=NULL;i++)
    	curr=curr->next;
    if(curr==NULL)
    	return head;
    temp->next = curr->next;     // Make the newNode next as slow next
    curr->next = temp;           // Make slow next as newNode
	
	return head;
}


// Insert in Sorted LinkedList


Node * insertInSorted(Node * head, int x){
         Node *temp=new Node(x);
         if(head==NULL)
         	return temp;
         if(head->data>x){
         	temp->next =head;
         	return temp;
         }
         Node *curr =head;
         while(curr->next!=NULL && curr->next->data<x)
         	curr=curr->next;
         temp->next=curr->next;
         curr->next=temp;
         return head;
     }


// Delete Tail of Linked List


Node * deleteTail(Node *head){
     if(head==NULL)
     	return NULL;
     if(head->next==NULL){
     	delete head;
     	return NULL;
     }
     Node *curr=head;
     while(curr->next->next!=NULL)
     	curr=curr->next;
     delete(curr->next);
     curr->next=NULL;
     return head;
}

//Delete Head of Linked List

Node * deleteHead(Node *head){
     if(head==NULL)
     	return NULL;
     else{
     	Node *temp=head->next;
     	delete head;
     	return temp;
     }
}

//Remove duplicate element from sorted Linked List

Node *removeDuplicates(Node *head){
        Node *curr=head;
        while(curr!=NULL && curr->next!=NULL){
        	if(curr->data==curr->next->data){
        		Node *temp=curr->next;
        		curr->next=curr->next->next;
        		delete(temp);
        	}
        	else
        		curr= curr->next;
        }
        return head;
}

// Nth node from end of linked list

int getNthFromLast(Node *head, int n){
       if(head==NULL)
     	    return -1;
     	Node * slow=head;
     	Node * fast = head;
     	for(int i=0;i<n;i++){
     		if(slow==NULL)
     			return -1;
     		slow=slow->next;
     	}
     	while(slow!=NULL){
     		fast=fast->next;
     		slow=slow->next;
     	}
     	return fast->data;
}

// Reverse a linked list
struct Node* reverseList(struct Node *head){
     Node *curr=head;
     Node *prev=NULL;
     
     while(curr!=NULL){
     	Node *ahead = curr->next;
     	curr->next=prev;
     	prev=curr;
     	curr=ahead;
     } 
     return prev;
} 
 
//Linked List Delete at Position 
 
Node * deleteAtPosition(Node *head,int pos){
       if(head==NULL)
       	return NULL;
       else if(pos==1){
       	Node *temp=head->next;
       	delete(head);
       	return temp;
       }
       else{
       Node *curr =head;
       for(int i=0;i<(pos-1) && curr!=NULL;i++){
       	curr =curr->next;
       }
       Node *temp1=curr->next->next;
       delete curr->next;
       curr->next=temp1;
       return head;
   }

}

// Is Linked List Sorted


bool isSorted(Node * head){
    bool inc=true,dec=true;
    int prev=head->data;
    head=head->next;
    while(head!=NULL){
        if(prev<head->data)
            dec=false;
        if(prev>head->data)
            inc=false;
        prev=head->data;
        
        head=head->next;
   }
     if(inc||dec)
        return true;
    else
        return false;
 }

 // Join Two Linked List

 Node * joinTheLists(Node * head1, Node * head2){
         Node *temp=head1;
         while(temp->next!=NULL)
         	temp=temp->next;
         	temp->next=head2;
         
         
         return head1;

}


// Identical Linked Lists

bool areIdentical(struct Node *head1, struct Node *head2){
    struct Node *temp1=head1;
    struct Node *temp2=head2;
    int c1=0,c2=0;
    while(temp1!=NULL){
    	c1++;
    	temp1=temp1->next;
    }
     while(temp2!=NULL){
    	c2++;
    	temp2=temp2->next;
    }
    if(c1!=c2)
    	return false;
    while(head1!=NULL && head2!=NULL){
    	if(head1->data!=head2->data){
    		return false;
    	}
           head1=head1->next;
           head2=head2->next;
       }
        return true;
}


bool areIdentical(struct Node *head1, struct Node *head2){
    struct Node *temp1=head1;
    struct Node *temp2=head2;
    while(temp1!=NULL && temp2!=NULL){
    	if(temp1->data!=temp2->data){
    		return false;
    	}
    	temp1=temp1->next;
    	temp2=temp2->next;
    }
    return true;
}


// Delete without head pointer
// Delete a node with only pointer given to it
void deleteNode(Node *node){
    if(!node->next)
    	return ;
    Node *temp = node->next;
    node->data=temp->data;
    node->next=temp->next;
    delete(temp);
    //free(temp);


}





struct Node* reverseList(struct Node *head){
     
     struct  *curr=head;
     struct  *temp=curr->head;
     if(head==NULL)
     	return;
     if(temp==NULL)
     	return;
     temp = reverseList(temp);
     curr->next->next=curr;
     curr->next = NULL;
     return temp;


}

// Detect and remove loop in linked list
  // glt
void detect(Node *head){
	Node *slow=head,*fast=head;
	while(fast!=NULL&& fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
			break;
	}
	if(slow!=fast)
		return;
	slow=head;
	while(slow->next!=fast->next){
		slow=slow->next;
		fast=fast->next;
	}
	fast->next=NULL;
}

// Detect loop in linked list

bool detectLoop(Node* head){
    Node *slow=head;
    Node * fast=head;
    while(fast!=NULL&&fast->next!=NULL){
    	slow=slow->next;
    	fast=fast->next->next;
    	if(slow==fast)
    		return true;
    }
    return false;
}

// Remove loop in ll

void removeLoop(Node* head){
    Node *slow=head;
    Node * fast=head->next;
    while(fast!=slow){
       if(fast==NULL|| fast->next==NULL)
       	return ;
    	slow=slow->next;
    	fast=fast->next->next;
    }
    int size=1;
    fast=fast->next;
    while(fast!=slow){
    	size++;
    	fast=fast->next;
    }
    slow=head;
    fast=head;
    for(int i=0;i<size-1;i++)
    	fast=fast->next;
    while(slow!=fast->next){
    	slow=slow->next;
    	fast=fast->next;
    }
    fast->next=NULL;
}

// Remove duplicates from an unsorted linked list

Node * removeDuplicates( Node *head) { // 5 2 2 4
  unordered_set<int>s;//  set  
  Node *curr= head;
  Node *prev=NULL;
  while(curr!=NULL){
  	if(s.find(curr->data)!=s.end()){  // 2
  		prev->next=curr->next;
  		delete(curr);
  	}
  	else{
  		s.insert(curr->data);    // 5 2 4
  		prev = curr;     
  	}
  	curr = prev->next;         //  prev = new curr
  }
  return head;

}


//Merge two sorted linked lists

// M1
 
  Node* sortedMerge(Node* head1, Node* head2)
{
    if(head1 == NULL)
        return head2;
    if(head2 == NULL)
        return head1;
    
    if(head1->data < head2->data) {
        head1->next = sortedMerge(head1->next,head2);
        return head1;
    } 
    else {
        head2->next = sortedMerge(head1,head2->next);
        return head2;
    }
}

// M 2

Node* sortedMerge(Node* a, Node* b){  
    if(a==NULL) return b;
    if(b==NULL)  return a;
    Node *head=NULL,*tail=NULL;
    if(a->data <= b->data){
    	head=tail =a;
    	a=a->next;
    }
    else{
    	head = tail =b;
    	b=b->next;
    }
    while(a!=NULL && b!=NULL){
    	if(a->data <= b->data){
    		tail->next=a;
    		tail=a;
    		a=a->next;
    	}
    	else{
    		tail->next=b;
    		tail=b;
    		b=b->next;
    	}
    	if(a==NULL) {
    		tail->next=b;
         }
         else{
         	tail -> next=a;
         }
         return head;
    }
}




// Swap Kth nodes from ends 

Node *swapkthnode(Node* head, int num, int K){ 
    if (K > num) 
      return head;
    if(2*K-1 == num) return head;
    
    Node* x_prev = NULL, *y_prev = NULL;
    Node* x = head,* y = head;
    int count = K-1;
    while(count--){
        x_prev = x;
        x = x->next;   //  kth node from start
    }
    count = num - K;
    while(count--){    
        y_prev = y;
        y = y->next;        // kth node from end
    }
    if(x_prev)
        x_prev->next = y;
    if(y_prev)
        y_prev->next = x;
        
    Node* temp = x->next;
    x->next = y->next;
    y->next = temp;
    
    if(K == 1)
        return y;
    if(K == num)
        return x;
    return head;    
}


// Find length of Loop

int countNodesinLoop(struct Node *head){
    Node *slow=head;
    Node * fast=head->next;
    while(fast!=slow){
       if(fast==NULL|| fast->next==NULL)
       	return 0;
    	slow=slow->next;
    	fast=fast->next->next;
    }
    int size=1;
    fast=fast->next;
    while(fast!=slow){
    	size++;
    	fast=fast->next;
    }
    return size;  
}


// Check if Linked List is Palindrome

bool isPalindrome(Node *head){
    stack<int>s;
    Node *temp=head;
    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }
    while(head!=NULL){
        if(head->data!=s.top()){
            return 0;
       }
       s.pop();
       head=head->next;
    }
    return 1;
}

// LRU Cache


class LRUCache
{
private:

public:
    LRUCache(int cap){
        // constructor for cache
    }
    
    static int get(int key){
        // this function should return value corresponding to key
    }
    
    static void set(int key, int value){
        // storing key, value pair
   
    }
}

https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-list/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/pairwise-swap-of-nodes-in-linkelist/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1/?track=DSASP-LinkedList&batchId=154
https://practice.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1/?track=DSASP-LinkedList&batchId=154


// Insert in a Sorted List

Node *sortedInsert(struct Node* head, int data) {
    struct Node* newNode =new Node(data);
    if(head==NULL||head->data>=newNode->data){
        newNode->next=head;
        return newNode;
    }

    Node* temp = head;
    while(temp->next != NULL && temp->next->data<newNode->data)
        temp=temp->next;
       newNode->next=temp->next;
       temp->next = newNode;
    return head;
}

