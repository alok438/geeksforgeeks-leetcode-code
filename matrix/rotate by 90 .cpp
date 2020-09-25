

class Solution
{   
public:     
    void rotateby90(vector<vector<int> >& mat, int n) { 
            for(int i=0;i<n;i++){
                  for(int j=i+1;j<n;j++){
                      swap(mat[i][j],mat[j][i]);
                  }
              } 
              for (int i = 0; i < n; i++) {
                     int k = n - 1;
                  for (int j = 0; j <k; j++;k--) {
                         swap(mat[j][i], mat[k][i]);
                        
                   }
                }
    } 
};