#include <bits/stdc++.h>
using namespace std; 
int countPaths(list<int> g[], int V, int s, int d);
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        int u, v;
        list <int> *adj = new list <int>[N + 1];
        while (M--) {
            cin >> u >> v;
            adj[u].push_back (v);
        }
        int s, e;
        cin >> s >> e;
        cout << countPaths(adj, N, s, e) << endl;
    }
    return 0;
} 

void DFSUtil(list<int>adj[],int s,int d,vector<bool>&vis,int &count){
	vis[s]=true;
	if(s==d)
		count++;
	else {
		for(int i:adj[s])
			if(!vis[i])
				DFSUtil(adj,i,d,vis,count);
	}
	vis[s]=false;
}

int countPaths(list<int> g[], int V, int s, int d) {
     vector<bool>vis(V,false);
     int count=0;
     DFSUtil(g,s,d,vis,count);
     return count;
}
