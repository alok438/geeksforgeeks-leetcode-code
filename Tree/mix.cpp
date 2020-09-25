//Preorder Traversal

void utli(struct Node* root,vector<int>&res){
     if(root!=NULL){
   	res.push_back(root->data);
   	utli(root->left,res);
   	utli(root->right,res);
   }
}
 
vector <int> preorder(Node* root){
  	vector<int>res;
    utli(root,res);
   return res;
}

// Inorder Traversal
void utli( Node *root,vector<int>&res){
   if(root!=NULL){
   utli(root->left,res);
   res.push_back(root->data);
   utli(root->right,res);
   }
}
 
vector <int> inOrder(struct Node *root) {
    vector<int>res;
    utli(root,res);
    return res ;
}


//Postorder Traversal

void utli(struct Node* root, vector <int> &res){
    
    if(root!=NULL){
    utli(root->left, res);
    utli(root->right, res);
    res.push_back (root->data);
    }
}

vector <int> postOrder (Node *root){
    vector <int> res;
    utli (root, res);
    return res;
}

//Height of Binary Tree

int height(Node* root){
    if(root!=NULL){
    	return max(height(root->left),height(root->right))+1;
    }
    return 0;
}

//Determine if Two Trees are Identical 

bool isIdentical(Node *a, Node *b){
     if(a==NULL && b==NULL)
     	return true;
 return (a&&b) &&(a->data==b->data) &&isIdentical(a->left,b->left) && isIdentical(a->right,b->right);


}

// Children Sum Parent

int isSumProperty(Node *root){
   if(root==NULL)
   	return 1;
   if(root->left==NULL && root->right==NULL)  // must
   	return 1;
   int sum=0;
   if(root->left!=NULL) {
   	sum+=root->left->data;
   }
   if(root->right!=NULL){
   	sum+=root->right->data;
   }
   return ((root->data==sum) && (isSumProperty(root->left)) && isSumProperty(root->right));
}

// Level order traversal

vector<int> levelOrder(Node* root){
	queue<Node *>q;
    vector<int>res;
    if(root==NULL) return res;
    
    q.push(root);
    while(q.empty()==false){
    	//int count = q.size();
    	//for(int i=0;i<count;i++){
    		Node* curr = q.front();
    		res.push_back(curr->data);
    		q.pop();
    		if(curr->left!=NULL)
    			q.push(curr->left);
    		if(curr->right!=NULL)
    			q.push(curr->right);
    	}
    	// cout<<endl;
    	return res;

   // }
}

vector<int> levelOrder(Node* root){
	queue<Node *>q;
    vector<int>res;
    if(root==NULL) return res;
    
    q.push(root);
    while(q.empty()==false){
    	//int count = q.size();
    	//for(int i=0;i<count;i++){
    		Node* root = q.front();
    		res.push_back(root->data);
    		q.pop();
    		if(root->left!=NULL)
    			q.push(root->left);
    		if(root->right!=NULL)
    			q.push(root->right);
    	}
    	// cout<<endl;
    	return res;

   // }
}


//Level order traversal Line by Line

void levelOrder(Node* node){
	queue<Node *>q;
	q.push(node);
	while(1){
		int n=q.size();
		if(n==0)
			break;
		while(n>0){
			Node *curr=q.front();
   	        q.pop();
   	        cout<<(curr->data)<<" ";
   	        if(curr->left!=NULL)
   		        q.push(curr->left);
   	        if(curr->right!=NULL)
   		        q.push(curr->right);
         	n--;
         }
         cout<<"$"<<" ";
     }
 }

// Level order traversal in spiral form

void printSpiral(Node *root){
     if(root==NULL)
     	return  NULL;
nahi bana 


}

// Lowest Common Ancestor in a Binary Tree

Node* lca(Node* root ,int n1 ,int n2 ){
   if(root ==NULL)
   	return NULL;
   if(root->data==n1||root->data==n2)
   	return root;
   Node* lca1=lca(root->left,n1,n2);
   Node* lca2=lca(root->right,n1,n2);
   if(lca1!=NULL && lca2!=NULL)
   	return root;
   if(lca1!=NULL)
   	return lca1;
   else
   	return lca2;
}

// Check for blanced tree

bool flag;
int isbalanced(Node *root){
	if(!flag) return 0;
     if(root == NULL) return 0;
     int lh=isbalanced(root->left);
     if(lh==-1) return -1;
     int rh=isbalanced(root->right);
     if(rh==-1) return -1;
     if(abs(lh-rh)>1) { flag=false;return -1;}
  
     return max(lh,rh)+1;
 }
 bool isBalanced(Node *root){
 	flag=true;
 	isbalanced(root);
 	return flag;

 }

// level order Traversal line by line

void printlevel(Node *root){   // method 2
	if(root==NULL)
		return;
	queue<Node *>q;
	q.push(root);
	while(!q.empty()){
		int count = q.size();
		for(int i=0;i<count;i++){
			Node *curr=q.top();
			q.pop();
			cout<<(curr->data)<<" ";
			if(curr->left!=NULL)
				q.push(curr->left);
			if(curr->right!=NULL)
				q.push(curr->right);
		}
		cout<<"\n";

	}
}

// Size of a binary tree

int getsizeE(Node *root){
	if(root==NULL)
		return 0;
	return 1+getsizeE(root->left)+getsizeE(root->right);
}

// maximum in Binary tree

int getMax(Node *root){
	if(root==NULL)
		return INT_MIN;
	return max(root->data,max(getMax(root->left),getMax(root->right)));
}


// Print left view of binary tree

// Method 1
void printleft(struct Node *root,int level,int *Maxlevel){
	if(root==NULL) return;
	if(*Maxlevel < level){
		cout<<root->data<<" ";
		*Maxlevel=level;
	}
	printleft(root->left,level+1,Maxlevel);
	printleft(root->right,level+1,Maxlevel);
}

void leftView(struct Node *root){
	int Maxlevel=0;
	printleft(root,1,&Maxlevel);
}


   //method 2

void leftView(Node *root){    
	if(root==NULL)
		return;
	queue<Node *>q;
	q.push(root);
	while(!q.empty()){
		int count = q.size();
		for(int i=0;i<count;i++){
			Node *curr=q.front();
			q.pop();
			if(i==0)
			cout<<(curr->data)<<" ";
			if(curr->left!=NULL)
				q.push(curr->left);
			if(curr->right!=NULL)
				q.push(curr->right);
		} 
	}
}

// Print right view of binary tree
void printleft(struct Node *root,int level,int *Maxlevel){
    if(root==NULL) return;
    if(*Maxlevel < level){
        cout<<root->data<<" ";
        *Maxlevel=level;
    }
    printleft(root->right,level+1,Maxlevel);
    printleft(root->left,level+1,Maxlevel);
}

void rightView(struct Node *root){
    int Maxlevel=0;
    printleft(root,1,&Maxlevel);
}

// Maximum width of binary tree

int getMaxWidth(Node* root){
	if(root==NULL) return 0;
	queue<Node *>q;
	q.push(root);
	int res=0;
	while(!q.empty()){
		int count = q.size();
        res=max(res,count);
		for(int i=0;i<count;i++){
			Node *curr=q.front();
			q.pop();  
			if(curr->left!=NULL)
				q.push(curr->left);
			if(curr->right!=NULL)
				q.push(curr->right);
		} 
	}
	return res;
}

// Convert a Binary tree to DLL
 
void BToDLL(Node *root,Node **prev){
	if(root == NULL) return ;

	 BToDLL(root->right,prev);
	 root->right = *prev;
  
	if(*prev!=NULL){
		(*prev)->left =root;
	}
	*prev=root;
	BToDLL(root->left,prev);
 
}
Node* bToDLL(Node *root)
{
    Node *prev = NULL;
    BToDLL(root,&prev);
    return prev;
    
}


// Construct Binary Tree From Inorder and Preorder

int PreIndex=0;
Node *ConstructTree(int in[],int pre[],int is,int ie){
	if(is>ie)  return NULL;
	Node *root= new Node(pre[PreIndex++]);
	int inIndex;
	for(int i=is;i<=ie;i++){
		if(in[i]==root->data){
			inIndex=i;
			break;
		}
	}
	root->left=ConstructTree(in,pre,is,inIndex-1);
	root->right=ConstructTree(in,pre,inIndex+1,ie);
	return root;
}



// Diameter of Binary tree

int Diameter(Node* root, int *res){
	if(root==NULL)  return 0;
	int lh=Diameter(root->left,res);
	int rh=Diameter(root->right,res);
	*res=max(*res,lh+rh+1);
	return 1+max(lh,rh);
}

int diameter(Node* node){
	int res=0;
	Diameter(node,&res);
	return res;
}


// Count Nodes in a complete BT

int CountNode(Node *root){
	int lh=0,rh=0;
	Node *curr=root;
	while(curr!=NULL){
		lh++;
		curr=curr->left;
	}
	curr=root;
	while(curr!=NULL){
		rh++;
		curr=curr->right;
	}
	if(lh==rh)
		return pow(2,lh)-1;
	return 1+CountNode(root->left)+CountNode(root->right);
}

// Level order traversal in spiral form

void printSpiral(Node *root){
	if(root==NULL)
		return;
	stack<Node*>s1;
	stack<Node*>s1;
	s1.push(root);
	while(!s1.empty()||!s2.empty()){
		while(!s1.empty()){
			struct Node *temp=s1.top();
			s1.pop();
			cout<<temp->data<<" ";
			if(temp->right){
				s2.push(temp->right);
			} 
			if(temp->left){
				s2.push(temp->left);
			}
		}
		while(!s2.empty()){
			struct Node *temp1=s2.top();
			s2.pop();
			cout<<temp1->data<<" ";
			if(temp1->left){
				s1.push(temp1->left);
			} 
			if(temp1->right){
				s1.push(temp1->right);
			}
		}

	}
    
}

// Vertical Width of a Binary Tree

 void util(Node *root,int curr,int &mini,int &maxi){
 	if(root==NULL){
 		mini=min(mini,curr);
 		maxi=max(maxi,curr);
 		return;
 	}
 	util(root->left,curr-1,mini,maxi);
 	util(root->right,curr+1,mini,maxi);
 }

int verticalWidth(Node* root){
     if(root==NULL)
     	return 0;
     int maxi=INT_MIN;
     int mini=INT_MAX;
     util(root,0,mini,maxi);
     return maxi-mini-1;
 }

 // Mirror Tree

void mirror(Node* node) {
  if(node==NULL)
  return;
  //Node* temp;
  mirror(node->left);
  mirror(node->right);
  swap(node->left,node->right);
}

// Check if subtree

bool isSubTree(Node* T, Node* S) {
      
}

