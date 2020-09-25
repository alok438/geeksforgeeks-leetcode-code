bool vis[1000000];
void DFS(list<int>adj[],int i){
	vis[i]=true;
	for(int u:adj[i]){
		if(vis[u]==false)
			DFS(adj,u);
	}
}
		
bool isBridge(list<int> adj[], int v, int s, int e) {
	memset(vis,false,sizeof(vis));
	int b=0,a=0;
	for(int i=0;i<v;i++)
		if(vis[i]==false){
			DFS(adj,i);
			b++;
		}
		adj[s].remove(e);
		adj[e].remove(s);
		memset(vis,false,sizeof(vis));
	  for(int i=0;i<v;i++){
		if(vis[i]==false){
			DFS(adj,i);
			a++;
		}
	  }
	  return(b!=a);
			
	
}