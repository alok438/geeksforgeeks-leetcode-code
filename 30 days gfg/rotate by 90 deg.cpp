#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);
void rotate(vector<vector<int> >& m)
{
   int i;
   int n=m.size();
   for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
       swap(m[i][j],m[j][i]);
    }
 
   
 for(i=0;i<n;i++)
   {
       
      for(int j=0,k=n-1;j<k;j++,k--)
       swap(m[j][i],m[k][i]);
       
   }
   
}
int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
          
        }
        cout<<endl;
    }
    return 0;
}