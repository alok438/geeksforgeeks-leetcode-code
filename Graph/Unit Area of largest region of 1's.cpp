#include <bits/stdc++.h>
using namespace std;
#define SIZE 100
void DFSutil(int A[][SIZE],int n,int m,int i,int j,int &count){
	if(i<0||j<0||i>=n||j>=m||A[i][j]!=1)
		return;
	count++;
     A[i][j]=2;
        DFSutil(A,n,m,i,j+1,count);
       	DFSutil(A,n,m,i,j-1,count);
       	DFSutil(A,n,m,i+1,j,count);
       	DFSutil(A,n,m,i-1,j,count);
       	DFSutil(A,n,m,i+1,j-1,count);
       	DFSutil(A,n,m,i-1,j+1,count);
       	DFSutil(A,n,m,i+1,j+1,count);
       	DFSutil(A,n,m,i-1,j-1,count);
}

int findMaxArea(int N, int M, int A[SIZE][SIZE] ){
    int count;
    int res=0;
    for(int i=0;i<N;i++)
    	for(int j=0;j<M;j++)
    		if(A[i][j]==1){
    			count=0;
    		DFSutil(A,N,M,i,j,count);
    		res=max(res,count);
    	}

    return res;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int g[SIZE][SIZE];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> g[i][j];
        cout << findMaxArea(n, m, g) << endl;
    }
    return 0;
}  