#include <bits/stdc++.h> 
using namespace std; 
void DFSutil(vector<int> g[],int s,vector<int>&vis){
      vis[s]=true;
      for(int i:g[s])
      	if(!vis[i])
      		DFSutil(g,i,vis);

}

int findMother(int V, vector<int> g[]) { 
     vector<int>vis(V,false);
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

int main() { 
    int T;
    cin>>T;
    while(T--){
        int num, edges;
        cin>>num>>edges;
        vector<int> adj[num];        
        int u, v;
        while(edges--){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        cout<<findMother(num, adj)<<endl;
    }

	return 0;
} 