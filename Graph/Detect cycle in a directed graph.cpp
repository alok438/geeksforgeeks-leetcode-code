#include <bits/stdc++.h>
using namespace std;
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

int main() {
	int t;
	cin >> t;
    while(t--){
	    int v, e;
	    cin >> v >> e;
	    vector<int> adj[v];
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}   