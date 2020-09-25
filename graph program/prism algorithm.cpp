int findMinVertex(int weights[],bool vis[],int n){
   int minVertex=-1;
   for(int i=0;i<n;i++){
     if(!vis[i]&&(minVertex==-1||weights[i]<weights[minVertex])){
        minVertex=i;
     }
  }
  return minVertex;
}
int costofMST(int parent[], vector<vector<int>>&edges, int n) {
    int cost = 0;
    for (int i = 1; i < n; i++) 
		cost += edges[i][parent[i]];
    return cost;
}
	
 int spanningTree(int n,int E,vector<vector<int> >&edges){
    int parent[n];
	int weights[n];
    bool vis[n];
    
 for(int i=0;i<n;i++){
	 vis[i]=false;
	 weights[i]=INT_MAX;
 }
 parent[0]=-1;
 weights[0]=0;
 for(int i=0;i<n-1;i++){
	 //find min vertex
	 int minVertex=findMinVertex(weights,vis,n);
	 vis[minVertex]=true;
	 // explore un visted neighbours
	 for(int j=0;j<n;j++){
		 if(edges[minVertex][j]!=0&&!vis[j]){
			 if(edges[minVertex][j]<weights[j]){
				 weights[j]=edges[minVertex][j];
				 parent[j]=minVertex;
			 }
		 }
	 }
 }
 return costofMST(parent, edges, n);
 }

