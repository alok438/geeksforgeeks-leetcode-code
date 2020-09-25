bool dfsutil(vector<int> *adj,int u,vector<bool>&vis,int parent){
    vis[u]=true;
    for(auto v:adj[u]){
       if(vis[v]&&v!=parent)
       return true;
       else if(!vis[v])
        if(dfsutil(adj,v,vis,u))
        return true;
    }
    return false;
}
bool isCyclic(vector<int> g[], int v)
{
  vector<bool>vis(v,false);
  for(int u=0;u<v;u++){
      if(!vis[u])
      if(dfsutil(g,u,vis,-1))
      return true;
  }
  return false;
   
}