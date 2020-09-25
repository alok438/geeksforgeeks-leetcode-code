class Solution
{   
public:     
    void transpose(vector<vector<int> >& m, int n){ 
              for(int i=0;i<n;i++){
                  for(int j=i+1;j<n;j++){
                      swap(m[i][j],m[j][i]);
                  }
              }        
    }
};