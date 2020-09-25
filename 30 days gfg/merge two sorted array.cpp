// Merging two sorted arrays with O(1)
// extra space
#include <bits/stdc++.h>
using namespace std;

// Function to find next gap.
int nextGap(int gap)
{
	if(gap<=1)
        return 0;
    return (gap/2)+(gap%2);
}

void merge(int *arr1, int *arr2, int n, int m)
{
	int i,j,gap=n+m;
	for(gap=nextGap(gap);gap>0;gap=nextGap(gap))
    {
        for(i=0;i+gap<n;i++)
            if(arr1[i]>arr1[i+gap])
             swap(arr1[i],arr1[i+gap]);
        for(j=gap>n?gap-n:0; i<n&&j<m;i++,j++)
            if(arr1[i]>arr2[j])
             swap(arr1[i],arr2[j]);
        if(j<m)
        {
            for(j=0;j+gap<m;j++)
                if(arr2[j]>arr2[j+gap])
                 swap(arr2[j],arr2[j+gap]);
        }
    }
}

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int j=0;j<m;j++)
            cin>>b[j];
        merge(a,b,n,m);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        for(int j=0;j<m;j++)
            cout<<b[j]<<" ";
        cout<<endl;
    }
}
