#include<bits/stdc++.h>
using namespace std;
int dp[22][22];
void clear(){
    memset(dp,-1,sizeof dp);
}


int dfs(vector<int> graph[],int root,int v,int k){
    if(k==0 && root==v) return 1;
    if(k==0 && root!=v) return 0;
    if(dp[root][k]!=-1) return dp[root][k];
    int count=0;
    for(int i=0;i<graph[root].size();i++){
        count+=dfs(graph,graph[root][i],v,k-1);
    }
    dp[root][k]=count;
    return count;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int v,e;
	    cin>>v;
	    vector<int> adj[v];
	    
	    for(int i=0;i<v;i++)
	        for(int j=0;j<v;j++){
	         int l;
	         cin>>l;
	         if(l)
	          adj[i].push_back(j);
	    }
	    int u,x,k;
	    cin>>u>>x;
	    
	    cin>>k;
	    int dp[v][k];
	    //coun=0;
	    //cout<<u<<x<<k<<endl;
	    cout<<dfs(adj,u,x,k);
	    cout<<endl;
	    clear();
	}
	return 0;
}