#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << "\n";
}
vector <vector <int> > nearest(vector<vector<int>> &arr, int row, int col);
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int row, col;
        cin >> row >> col; 
        vector<vector<int>> graph(row, vector<int>(col, 0));
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> graph[i][j];
            }
        }

        print (nearest(graph, row, col), row, col);
    }

    return 0;
} 
vector <vector <int> > nearest(vector<vector<int>> &mat, int N, int M) {
       vector<vector<int>>sol(N,vector<int>(M,0));
       vector<vector<int>>vis(N,vector<int>(M,0));
       queue<pair<int,int>>q;
       for(int i=0;i<N;i++){
       	for(int j=0;j<M;j++){
       		vis[i][j]=0;
       		sol[i][j]=INT_MAX;
       		if(mat[i][j]){
       			vis[i][j]=1;
       			sol[i][j]=0;
       			q.push(make_pair(i,j));
       		}
       	}
     }
     while(!q.empty()){
     	pair<int,int>p=q.front();
     	q.pop();
     	int x=p.first;
     	int y=p.second;
     	if((x>0) && (!vis[x-1][y])){
     		sol[x-1][y]=min(sol[x-1][y],sol[x][y]+1);
     		vis[x-1][y]=1;
     		q.push(make_pair(x-1,y));
     	}
     		if((x<(N-1)) && (!vis[x+1][y])){
     		sol[x+1][y]=min(sol[x+1][y],sol[x][y]+1);
     		vis[x+1][y]=1;
     		q.push(make_pair(x+1,y));
     	}
     	if((y>0) && (!vis[x][y-1])){
     		sol[x][y-1]=min(sol[x][y-1],sol[x][y]+1);
     		vis[x][y-1]=1;
     		q.push(make_pair(x,y-1));
     	}
     
     	if((y<(M-1)) && (!vis[x][y+1])){
     		sol[x][y+1]=min(sol[x][y+1],sol[x][y]+1);
     		vis[x][y+1]=1;
     		q.push(make_pair(x,y+1));
     	}
     }
     	return sol;

 }
