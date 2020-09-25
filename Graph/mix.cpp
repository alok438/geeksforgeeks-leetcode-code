// Print Adjacency list

void printGraph(vector<int> adj[], int V){
   for(int i=0;i<V;i++){
   	cout<<i;
   	for(int x:adj[i])
   		cout<<"->"<<" "<<x;
   	cout<<endl;
   }
}

// BFS 
vector <int> bfs(vector<int> g[], int N) {
    vector<int>vis(N,false);
    vector<int>res;
    queue<int>q;
    q.push(0);
    vis[0]=true;
    while(!q.empty()){
    	int u=q.front();
    	q.pop();
    	res.push_back(u);
    	for(int v:g[u]){
    		if(vis[v]==false){
    			vis[v]=true;
    		   q.push(v);
    	}

    	}
    }
    return res;
}

// DFS 
void dfsutil(vector<int> g[],int s,bool vis[],vector<int>&res){
    vis[s]=true;
     res.push_back(s);
    for(int v:g[s]){
    	if(!vis[v])
    		dfsutil(g,v,vis,res);
    }
 
}

vector <int> dfs(vector<int> g[], int N){
    bool vis[N];
    memset (vis, false, sizeof (vis));
    vector<int>res; 
    for(int i=0;i<N;i++){
    if(!vis[i]) 
    dfsutil(g,i,vis,res);
}
    return res;
  
}

// Find number of island

void bfs(vector<int>a[],int n,int m,int i,int j){
       if(i<0||j<0||i>=n||j>=m||a[i][j]!=1)
       	 return;
       	a[i][j]=2;
       	bfs(a,n,m,i,j+1);
       	bfs(a,n,m,i,j-1);
       	bfs(a,n,m,i+1,j);
       	bfs(a,n,m,i-1,j);
       	bfs(a,n,m,i+1,j-1);
       	bfs(a,n,m,i-1,j+1);
       	bfs(a,n,m,i+1,j+1);
       	bfs(a,n,m,i-1,j-1);
}

int findIslands(vector<int> A[], int N, int M) {
     int count=0;
     for(int i=0;i<N;i++){
     	for(int j=0;j<M;j++)
     		if(A[i][j]==1){
     		    bfs(A,N,M,i,j);
     	         count++;
     		}
     }
     return count;
     
}

// Detect cycle in an undirected graph


bool dfs(vector<int>g[],int s,vector<bool>&vis,int parent){
	vis[s]=true;
	for(int u:g[s]){
		if(!vis[u]){
			if(dfs(g,u,vis,s))
				return true;
		}
			 else if(u!=parent)
			 	return true;
		
	}
	return false;
}
bool isCyclic(vector<int> g[], int V){
    vector<bool> vis(V, false);
    for(int i=0;i<V;i++){
    	if(!vis[i])
    		if(dfs(g,i,vis,-1))
    			return true;
    }
    return false;
   
}

// Detect cycle in a directed graph

bool dfsrec(vector<int>adj[],int s,vector<bool>&vis,vector<bool>&resc){
	vis[s]=true;
	resc[s]=true;
	for(int u:adj[s]){
		if(!vis[u] && dfsrec(adj,u,vis,resc))
			return true;
		else if(resc[u]==true)
			return true;
	}
	resc[s]=false;
	return false;
}

bool isCyclic(int V, vector<int> adj[]){
  vector<bool>vis(V,false);
  vector<bool>resc(V,false);
  for(int i=0;i<V;i++){
  	if(!vis[i])
  		if(dfsrec(adj,i,vis,resc))
  			return true;
  }	
  return false;
}

// Find whether path exist

void dfs(vector <vector <int>> &M,int x,int y,vector<vector<bool>>&vis,int n){
	if(x<0||y<0||x>=n||y>=n||vis[x][y]==true||M[x][y]==0)
		return;
	vis[x][y]=true;
	
	dfs(M,x+1,y,vis,n);
	dfs(M,x-1,y,vis,n);
	dfs(M,x,y+1,vis,n);
	dfs(M,x,y-1,vis,n);
	
	
}

bool is_possible(vector <vector <int>> &M, int n) {
   vector <vector <bool>> vis(n,vector <bool>(n,false));
   int a,b,dx,dy;
   for(int i=0;i<n;i++){
   	for(int j=0;j<n;j++){
   		if(M[i][j]==1){
   			a=i;
   		    b=j;
   		}
   		else if(M[i][j]==2){
   			dx=i;
   		    dy=j;
   		}
   	}

   } 
   dfs(M,a,b,vis,n);
   return vis[dx][dy];
}

// Topological sort

void DFSUtil(vector<int> adj[],int s,vector<bool>&vis,stack<int>&st){
	vis[s]=true;
	for(int u:adj[s]){
		if(!vis[u]){
			DFSUtil(adj,u,vis,st);
		}
	}
    st.push(s);
}


vector<int> topoSort(int V, vector<int> adj[]) {
    stack<int>s;
    vector<int>res;
    vector<bool>vis(V,false);
    for(int i=0;i<V;i++){
    	if(!vis[i])
    		DFSUtil(adj,i,vis,s);
    } 
    while(!s.empty()){
    	res.push_back(s.top());
    	s.pop();
    	
    }
    return res;
}


// Possible paths between 2 vertices

void DFSUtil(list<int>adj[],int s,int d,vector<bool>&vis,int &count){
	vis[s]=true;
	if(s==d)
		count++;
	else {
		for(int i:adj[s])
			if(!vis[i])
				DFSUtil(adj,i,d,vis,count);
	}
	vis[s]=false;
}

int countPaths(list<int> g[], int V, int s, int d) {
     vector<bool>vis(V,false);
     int count=0;
     DFSUtil(g,s,d,vis,count);
     return count;
}

 // Distance of nearest cell having 1

vector <vector <int> > nearest(vector<vector<int>> &mat, int N, int M) {
       vector<vector<int>>sol(N,vector<int>(M,0));
       vector<vector<int>>vis(N,vector<int>(M,0));
       queue<pair<int,int>>q;
       for(int i=0;i<N;i++){
       	for(int j=0;j<M;j++){
       		vis[i][j]=0;
       		sol[i][j]=INT_MAX;
       		if(mat[i][j]){
       			vis[i][j]=1;
       			sol[i][j]=0;
       			q.push(make_pair(i,j));
       		}
       	}
     }
     while(!q.empty()){
     	pair<int,int>p=q.front();
     	q.pop();
     	int x=p.first;
     	int y=p.second;
     	if((x>0) && (!vis[x-1][y])){
     		sol[x-1][y]=min(sol[x-1][y],sol[x][y]+1);
     		vis[x-1][y]=1;
     		q.push(make_pair(x-1,y));
     	}
     		if((x<(N-1)) && (!vis[x+1][y])){
     		sol[x+1][y]=min(sol[x+1][y],sol[x][y]+1);
     		vis[x+1][y]=1;
     		q.push(make_pair(x+1,y));
     	}
     	if((y>0) && (!vis[x][y-1])){
     		sol[x][y-1]=min(sol[x][y-1],sol[x][y]+1);
     		vis[x][y-1]=1;
     		q.push(make_pair(x,y-1));
     	}
     
     	if((y<(M-1)) && (!vis[x][y+1])){
     		sol[x][y+1]=min(sol[x][y+1],sol[x][y]+1);
     		vis[x][y+1]=1;
     		q.push(make_pair(x,y+1));
     	}
     }
     	return sol;

 }

 // Mother vertices

void DFSutil(vector<int> g[],int s,vector<bool>&vis){
      vis[s]=true;
      for(int i:g[s])
      	if(!vis[i])
      		DFSutil(g,i,vis);

}

int findMother(int V, vector<int> g[]) { 
     vector<bool>vis(V,false);
     int v=0;
     for(int i=0;i<V;i++){
     	if(!vis[i]){
     		DFSutil(g,i,vis);
     	    v=i;
     	}
     }	
     fill(vis.begin(), vis.end(),false);
     DFSutil(g,v,vis);
     for(int i=0;i<V;i++)
     	if(!vis[i])
     		return -1;
     return v;
}
// Unit area of largest region of 1's

void DFSutil(int A[][SIZE],int n,int m,int i,int j,int &count){
	if(i<0||j<0||i>=n||j>=m||A[i][j]!=1)
		return;
	count++;
     A[i][j]=2;
        DFSutil(A,n,m,i,j+1,count);
       	DFSutil(A,n,m,i,j-1,count);
       	DFSutil(A,n,m,i+1,j,count);
       	DFSutil(A,n,m,i-1,j,count);
       	DFSutil(A,n,m,i+1,j-1,count);
       	DFSutil(A,n,m,i-1,j+1,count);
       	DFSutil(A,n,m,i+1,j+1,count);
       	DFSutil(A,n,m,i-1,j-1,count);
}

int findMaxArea(int N, int M, int A[SIZE][SIZE] ){
    int count;
    int res=0;
    for(int i=0;i<N;i++)
    	for(int j=0;j<M;j++)
    		if(A[i][j]==1){
    			count=0;
    		DFSutil(A,N,M,i,j,count);
    		res=max(res,count);
    	}

    return res;
}

// Rotten Oranges

void ROTutil(vector<vector<int> > &mat, int r, int c,int x,int y,queue<pair<int,int>>&q,vector<vector<int>>&vis){
	 if(x+1<r && (mat[x+1][y]==1) && !vis[x+1][y]){
	 	mat[x+1][y]=2;
	 	q.push({x+1,y});
	 }
	 if(x-1>=0 && (mat[x-1][y]==1) && !vis[x-1][y]){
	 	mat[x-1][y]=2;
	 	q.push({x-1,y});
	 }
	 if(y-1>=0 && (mat[x][y-1]==1) && !vis[x][y-1]){
	 	mat[x][y-1]=2;
	 	q.push({x,y-1});
	 }
	 if(y+1<c && (mat[x][y+1]==1) && !vis[x][y+1]){
	 	mat[x][y+1]=2;
	 	q.push({x,y+1});
	 }
}
 
int rotOranges(vector<vector<int> > &mat, int r, int c){
    queue<pair<int,int>>q;
    vector<vector<int>>vis(r,vector<int>(c,false));
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++)
    		if(mat[i][j]==2){
    			q.push({i,j});
    		}
    }
    q.push({-1,-1});
    int ans=0;
    while(!q.empty()){
    	pair<int,int>p=q.front();
    	q.pop();
    	int x=p.first;
    	int y=p.second;
    	if(x<0){
    		ans=max(ans,abs(x));
    		 if(!q.empty())
                q.push({x-1, y-1});
            continue;
    	}
    	vis[x][y]=1;
    	ROTutil(mat, r, c, x, y, q, vis);

    }
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++)
    		if(mat[i][j]==1){
    			return -1;
    		}
    	}
    	return ans-1;


}

// Minimum swaps to sort 
int minSwaps(int arr[], int n){
     pair<int,int>a[n];
     int res=0;
     for(int i=0;i<n;i++){
     	a[i].first=arr[i];
        a[i].second=i;
    }
    sort(a,a+n);
    vector<bool>vis(n,false);
    int ans=0;
    for (int i = 0; i < n; i++) { 
        if (vis[i] || a[i].second == i) 
            continue; 
       int cycle=0;
		int j=i;
		while(!vis[j]){
			vis[j]=1;
			j=a[j].second;
			cycle++;
		}
		res+=(cycle-1);
	}
	return res;
}

// 

int findMinVertex(vector<int>&distance,bool vis[],int n){
   int minVertex=-1;
   for(int i=0;i<n;i++){
     if(!vis[i]&&(minVertex==-1||distance[i]<distance[minVertex])){
        minVertex=i;
     }
  }
  return minVertex;
}
vector <int> dijkstra(vector<vector<int>>edges, int src, int n){
    vector<int>distance(n);
	bool vis[n];
for(int i=0;i<n;i++){
	 vis[i]=false;
	 distance[i]=INT_MAX;
 }
     distance[src]=0;
 for(int i=0;i<n-1;i++){
	 //find min vertex
	 int minVertex=findMinVertex(distance,vis,n);
	 vis[minVertex]=true;
	 // explore un visted neighbours
	 for(int j=0;j<n;j++)
		 if(edges[minVertex][j]!=0&&!vis[j]&&distance[minVertex]!=INT_MAX&&distance[minVertex]+edges[minVertex][j]<distance[j])
			   distance[j]=distance[minVertex]+edges[minVertex][j];
			
			}
   return  distance;
 }
// Bridge Edge in Graph

void DFS(list<int> adj[],int s,bool vis[]){
	vis[s]=true;
	for(int i:adj[s]){
		if(!vis[i])
			DFS(adj,i,vis);
	}
}

bool isBridge(list<int> adj[], int V, int s, int e) {
      bool vis[V];
      memset(vis,false,sizeof(vis));
      int a=0,b=0;
      for(int i=0;i<V;i++){   // DFS when not disconnect
      	if(!vis[i]){
      		DFS(adj,i,vis);
      	    a++;
      	}
    }
    adj[s].remove(e);
	adj[e].remove(s);
    memset(vis,false,sizeof(vis));
    for(int i=0;i<V;i++){          // DFS when disconnected
      	if(!vis[i]){
      		DFS(adj,i,vis);
      	    b++;
      	}
    }
    return (a!=b);
}