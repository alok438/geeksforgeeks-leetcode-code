vector <int> bfs(vector<int> g[], int n) {
    vector<bool>vis(n+1,false);
    vector<int>res;
	queue<int>q;
    q.push(0);
	vis[0]=true;

	 while(!q.empty()){
		 int t=q.front();
		 res.push_back(t);
		 q.pop();
		 for(int v:g[t])
		 {
            if(!vis[v]){
                vis[v]=true;
				q.push(v);
			}
		 }
	 }
	 return res;
}