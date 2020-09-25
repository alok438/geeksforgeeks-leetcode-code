#include<bits/stdc++.h>
using namespace std;
void dfsutil(vector<int> g[],int s,bool vis[],vector<int>&res){
    vis[s]=true;
     res.push_back(s);
    for(int v:g[s]){
    	if(!vis[v])
    		dfsutil(g,v,vis,res);
    }
 
}

vector <int> dfs(vector<int> g[], int N){
    bool vis[N];
    memset (vis, false, sizeof (vis));
    vector<int>res; 
    for(int i=0;i<N;i++){
    if(!vis[i]) 
    dfsutil(g,i,vis,res);
}
    return res;
  
}


int main(){
    int T;
    cin>>T;
    while(T--){
        int N, E;
        cin>>N>>E;
        vector<int> g[N];
        bool vis[N];
        memset(vis, false, sizeof(vis));
        for(int i=0;i<E;i++){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
} 