#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
using namespace std;
int main()
{    
     w(t)
     {
     int V,E;
     cin>>V>>E;
     int i;
     vector<int>graph[V];
     for(i=0;i<E;i++){
         int v,u;
         cin>>v>>u;
         graph[u].push_back(v);
         graph[v].push_back(u);
         
     }
     for(i=0;i<V;i++){
     cout<<i;
        for(int j=0;j<graph[i].size();j++){
            
            cout<<"-> "<<graph[i][j];
        }
        cout<<endl;
    }
    
	}
}
