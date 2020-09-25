vector <int> bfs(vector<int> g[], int N) {
    vector<int>vis(N,false);
    vector<int>res;
    queue<int>q;
    q.push(0);
    vis[0]=true;
    while(!q.empty()){
    	int u=q.front();
    	q.pop();
    	res.push_back(u);
    	for(int v:g[u]){
    		if(vis[v]==false){
    			vis[v]=true;
    		   q.push(v);
    	}

    	}
    }
    return res;
}



#include <bits/stdc++.h>
using namespace std;
vector <int> bfs(vector<int> g[], int N);
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}// } Driver Code Ends
vector <int> bfs(vector<int> g[], int N) {
    vector<int>vis(N,false);
    vector<int>res;
    queue<int>q;
    q.push(0);
    vis[0]=true;
    while(!q.empty()){
    	int u=q.front();
    	q.pop();
    	res.push_back(u);
    	for(int v:g[u]){
    		if(vis[v]==false){
    			vis[v]=true;
    		   q.push(v);
    	}

    	}
    }
    return res;
}