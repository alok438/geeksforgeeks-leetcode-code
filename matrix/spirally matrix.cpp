class Solution{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) {
        int row = 0,col = 0;
        vector<int>res;
        while(row<r && col<c){
           for(int i=col; i<c; i++)
               res.push_back(matrix[row][i]);      //Printing 1st row     
             row++;
           for(int i=row; i<r; i++)
               res.push_back(matrix[i][c-1]);        //Printing last col
              c--;
            if(row<r){
                for(int i=c-1; i>=col; --i)            //Printing last row
                    res.push_back( matrix[r-1][i]);
                r--;
            }
            if(col<c){
                for(int i=r-1; i>=row; --i)
                    res.push_back( matrix[i][col]);       //Printing first col
                col++;    
            }   
        }
        return res;
    }
};