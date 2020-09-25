#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
#define loop1()  for(int i=0;i<n;i++)
#define loop2()  for(int j=0;j<m;j++)
using namespace std;
int sortarr(int a[],int n){
    
    int l=0,h=n-1,mid=0;
    while(mid<=h){
       if(a[mid]==0)
       swap(a[mid++],a[l++]);
       else if(a[mid]==1)
         mid++;
         else
         swap(a[mid],a[h--]);
    }
}
int main()
{    
     w(t)
     {
     int n;
     cin>>n;
     int i,a[n];
     loop1()
       cin>>a[i];
    sortarr(a,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
}