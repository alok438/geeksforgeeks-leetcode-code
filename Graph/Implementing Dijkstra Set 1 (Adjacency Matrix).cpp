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

