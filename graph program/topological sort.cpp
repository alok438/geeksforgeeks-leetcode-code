void DFS(vector<int>adj[],int v,bool vis[],stack<int> &s){
	vis[v]=true;
	for(auto i:adj[v]){
		if(!vis[i])
			DFS(adj,i,vis,s);
	}
	 s.push(v);
}

vector<int> DFSUTIL(int v, vector<int> adj[]) {
     bool vis[v+1];
	 memset(vis,false,sizeof(vis));
	 stack<int>s;
	 for(int i=0;i<v;i++)
		 if(!vis[i])
			 DFS(adj,i,vis,s);
	 vector<int>res;
	 //int i=-1;
      while(!s.empty()){
		res.push_back(s.top());
         s.pop();
	  }
  return res;	  
}
