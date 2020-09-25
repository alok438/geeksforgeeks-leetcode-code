#include <bits/stdc++.h>
using namespace std;
vector <int> topoSort(int N, vector<int> adj[]); 
bool check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return false;
        }
    }
    return true;
}
 
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v; 
        vector<int> adj[N]; 
        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        } 
        vector <int> res = topoSort(N, adj); 
        cout << check(N, res, adj) << endl;
    }
} 

void DFSUtil(vector<int> adj[],int s,vector<bool>&vis,stack<int>&st){
	vis[s]=true;
	for(int u:adj[s]){
		if(!vis[u]){
			DFSUtil(adj,u,vis,st);
		}
	}
    st.push(s);
}


vector<int> topoSort(int V, vector<int> adj[]) {
    stack<int>s;
    vector<int>res;
    vector<bool>vis(V,false);
    for(int i=0;i<V;i++){
    	if(!vis[i])
    		DFSUtil(adj,i,vis,s);
    } 
    while(!s.empty()){
    	res.push_back(s.top());
    	s.pop();
    	
    }
    return res;
}

// Kah'n algorithm 

vector<int> topoSort(int V, vector<int> adj[]) {
	vector<int>indegree(V,0);
	vector<int >res;
	queue<int>q;
	for(int i=0;i<V;i++){
		for(int u:adj[i])
			indegree[u]++;
	}
	
	for(int i=0;i<V;i++){
		if(indegree[i]==0)
			q.push(i);
	}
//int count=0;
  while(!q.empty()){
	int u=q.front();
    res.push_back(u);
    q.pop();
    for(int i:adj[u]){
    	indegree[i]--;
    	if(indegree[i]==0)
    		q.push(i);
    	//c++;
    }


}
//if(count!=V)
  //cout<<"cycle";
return res;
}
