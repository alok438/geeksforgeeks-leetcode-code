void bfs(vector<int>adj,int u,int s,bool visited[]){
	queue<int>q;
	visited[s]=true;
	q.push(s);
	while(!q.empty){
		int u=q.front();
		q.pop();
		cout<<u<" ";
		for(int v:adj[u]){
			if(!visited[v])
				visited[v]=true;
			q.push(v);
		}
	}
}
void BFSdis(vector<int>adj[],int v){
	bool visited[v+1];
	for(int i=0;i<v;i++)
		visited[i]=false;
	for(int i=0;i<v;i++)
		if(!visited[i]){
			bfs(adj,i,visited);
		}
}

int BFSdis(vector<int>adj[],int v){
	int count=0;
	bool visited[v+1];
	for(int i=0;i<v;i++)
		visited[i]=false;
	for(int i=0;i<v;i++)
		if(!visited[i]){
			bfs(adj,i,visited);
			count++;
		}
		return count;
}