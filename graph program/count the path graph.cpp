using namespace std;
void dfs(int s, int d, int &c ,vector<int> graph[], bool vis[]){
              vis[s]=true;
             if(s==d)
			 {c++;}
        for(auto it=graph[s].begin();it!=graph[s].end();it++){
          if(!vis[*it]){
      dfs(*it,d,c,graph,vis);
}
}
     vis[s]=false;
}
       int main()
 {
	int t;
	cin>>t;
	while(t--){
	  int V,e,i;
    cin>>V>>e;
    vector<int> graph[V];
    for( i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
     }
    int s,d,c=0;
	cin>>s>>d;
	bool vis[V];
	memset(vis,false,sizeof(vis));
	dfs(s,d,c,graph,vis);
	cout<<c<<endl;
	}
	}
    