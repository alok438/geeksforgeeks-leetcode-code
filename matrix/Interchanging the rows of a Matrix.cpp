class Solution
{   
public:
    void interchangeRows(vector<vector<int> > &a){
        int n1 = a.size();
        int m1 = a[0].size();
        for(int i=0;i<m1;i++){
        int l=0,h=n1-1; 
        while(l<h){
            swap(a[l][i],a[h][i]);
            l++; 
            h--;
        }
    }
    }
};