#include <bits/stdc++.h>
using namespace std;
bool isBridge(list<int> adj[], int V, int u, int v);
int main() {
    int T;
    cin >> T;
    while (T--) {
        int s, N;
        cin >> s >> N;
        list<int> *adj = new list<int>[s];
        for (int i = 0; i < N; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        int a, b;
        cin >> a >> b;

        if (isBridge(adj, s, a, b))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
void DFS(list<int> adj[],int s,bool vis[]){
	vis[s]=true;
	for(int i:adj[s]){
		if(!vis[i])
			DFS(adj,i,vis);
	}
}
bool isBridge(list<int> adj[], int V, int s, int e) {
      bool vis[V];
      memset(vis,false,sizeof(vis));
      int a=0,b=0;
      for(int i=0;i<V;i++){
      	if(!vis[i]){
      		DFS(adj,i,vis);
      	    a++;
      	}
    }
    adj[s].remove(e);
	adj[e].remove(s);
    memset(vis,false,sizeof(vis));
    for(int i=0;i<V;i++){
      	if(!vis[i]){
      		DFS(adj,i,vis);
      	    b++;
      	}
    }
    return (a!=b);
}
