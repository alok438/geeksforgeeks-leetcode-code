class Solution
{   
public:
    void reverseCol(vector<vector<int> > &A)
    {
        int n1 = A.size();
        int m1 = A[0].size();
       int l=0;
       int h=m1-1;
    while(l<h){
        for(int i=0;i<n1;i++){
            swap(A[i][l],A[i][h]);
        }
        l++;
        h--;
    }
    
        
    }
};



class Solution
{   
public:
    void reverseCol(vector<vector<int> > &matrix)
    {
        int n1 = matrix.size();
        int m1 = matrix[0].size();
        for(int i = 0; i < n1; i++)
            for(int j = 0; j < m1 / 2; j++) 
                swap(matrix[i][j], matrix[i][m1-j-1]);
    }
};