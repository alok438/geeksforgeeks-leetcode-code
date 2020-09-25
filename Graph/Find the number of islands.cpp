#include <bits/stdc++.h>
using namespace std;
int findIslands(vector<int> A[], int N, int M);
int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
} 

void bfs(vector<int>a[],int n,int m,int i,int j){
       if(i<0||j<0||i>=n||j>=m||a[i][j]!=1)
       	 return;
       	a[i][j]=2;
       	bfs(a,n,m,i,j+1);
       	bfs(a,n,m,i,j-1);
       	bfs(a,n,m,i+1,j);
       	bfs(a,n,m,i-1,j);
       	bfs(a,n,m,i+1,j-1);
       	bfs(a,n,m,i-1,j+1);
       	bfs(a,n,m,i+1,j+1);
       	bfs(a,n,m,i-1,j-1);
}

int findIslands(vector<int> A[], int N, int M) {
     int count=0;
     for(int i=0;i<N;i++){
     	for(int j=0;j<M;j++)
     		if(A[i][j]==1){
     		    bfs(A,N,M,i,j);
     	         count++;
     		}
     }
     return count;
     
}

