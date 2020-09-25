#include<bits/stdc++.h>
using namespace std;
int minSwaps(int A[], int N);
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<minSwaps(a,n)<<endl;
	}
}
int minSwaps(int arr[], int n){
     pair<int,int>a[n];
     int res=0;
     for(int i=0;i<n;i++){
     	a[i].first=arr[i];
        a[i].second=i;
    }
    sort(a,a+n);
    vector<bool>vis(n,false);
    int ans=0;
    for (int i = 0; i < n; i++) { 
        if (vis[i] || a[i].second == i) 
            continue; 
       int cycle=0;
		int j=i;
		while(!vis[j]){
			vis[j]=1;
			j=a[j].second;
			cycle++;
		}
		res+=(cycle-1);
	}
	return res;
}  
