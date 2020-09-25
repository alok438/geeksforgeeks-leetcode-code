class Solution
{   
public:
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n){
         int i,j;
         int usum =0;
         int lsum=0;
         vector<int> res;
         for(i=0;i<n;i++){
         	for(j=0;j<n;j++){
         		if(i<=j){
                  usum+=matrix[i][j];
                  
         		}
         		
         	}
         }

       for(i=0;i<n;i++){
         	for(j=0;j<n;j++){
         		if(j<=i){
                  lsum+=matrix[i][j];
                 
         		}
         		
         	}
         }
         res.push_back(usum);
          res.push_back(lsum);
         return res;
    }
};