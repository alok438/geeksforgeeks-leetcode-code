  void bfs(vector<int> A[], int N, int M,int i,int j){
	  {if(i<0||i>=N||j<0||j>=M||A[i][j]!=1)
		  return;}
	  A[i][j]=2;
	  bfs(A,N,M,i+1,j);
	  bfs(A,N,M,i-1,j);
	  bfs(A,N,M,i,j+1);
	  bfs(A,N,M,i,j-1);
	  bfs(A,N,M,i+1,j-1);
	  bfs(A,N,M,i-1,j-1);
	  bfs(A,N,M,i-1,j+1);
	  bfs(A,N,M,i+1,j+1);
  }
 int findIslands(vector<int> A[], int N, int M) {

   int c=0;
	   for(int i=0;i<N;i++){
		   for(int j=0;j<M;j++){
			   if(A[i][j]==1){
			
				   bfs(A,N,M,i,j);
				   c++;
			   }
		   }
	   }
	   return c;
}
