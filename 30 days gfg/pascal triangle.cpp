#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
#define loop1()  for(int i=0;i<n;i++)
#define loop2()  for(int j=0;j<m;j++)
using namespace std;
int main()
{    
     w(t)
     {
     int n;
     cin>>n;
    int i;
    int c=1;
    for(i=1;i<=n;i++){
    cout<<c<<" ";
    c=c*(n-i)/i;}
    cout<<endl;
}
}