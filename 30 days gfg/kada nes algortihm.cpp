#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
#define loop1()  for(int i=0;i<n;i++)
#define loop2()  for(int j=0;j<m;j++)
using namespace std;
int kadanes(int a[],int n);
int main()
{    
     w(t)
     {
     int n;
     cin>>n;
     int i,a[n];
     loop1()
       cin>>a[i];
       cout<<kadanes(a,n)<<endl;
     }
}
int kadanes(int a[],int n){
     int sum=0,mx=INT_MIN,i;
     for(i=0;i<n;i++){
        sum+=a[i];
        mx=max(mx,sum);
      if(sum<0)
     { sum=0;}}
     return mx;
     
}
