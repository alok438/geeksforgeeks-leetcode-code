class Solution
{   
public:     
    vector<int> boundaryTraversal(vector<vector<int> > mat, int r, int c) {
        int i,j;
        vector<int>res;
        if(r==1){
          for(i=0;i<c;i++){
          	res.push_back(mat[0][i]);
          }
      }
         else if(c==1){
           for(i=0;i<r;i++){
           	res.push_back(mat[i][0]);
           }
         }

       else{
          for(i=0;i<c;i++){
          	res.push_back(mat[0][i]);
          } 
          for(i=1;i<r;i++){
          	res.push_back(mat[i][c-1]);
          }
          for(i=c-2;i>=0;i--){
          	res.push_back(mat[r-1][i]);
          }
          for(i=r-2;i>=1;i--){
          	res.push_back(mat[i][0]);
          }
       }
      return res;
    }
};