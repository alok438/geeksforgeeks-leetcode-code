class Solution
{   
public:
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B){
        vector<vector<int> >res;
        int n1 = A.size();
        int m1 = A[0].size();
        int n2 = B.size();
        int m2 = B[0].size();
        int i,j;
        if(m1==n2){
          res.resize(n1);
        for(i=0;i<n1;i++){
        	res[i].assign(m2,0);
        	for(j=0;j<m2;j++){
        		int sum=0;
        	for (int k = 0; k < m1; k++){
                sum += A[i][k] *  B[k][j]; 
        	}
        	res[i][j]=sum;
        	}
        } 
        
    }
    return res;
    }
};