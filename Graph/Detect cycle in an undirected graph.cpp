#include<bits/stdc++.h>
using namespace std;
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

 
int main(){
    int T;
    cin>>T;
    while(T--){
        int V, E;
        cin>>V>>E; 
        vector<int> adj[V];
        int u, v;
        for(int i=0;i<E;i++){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}