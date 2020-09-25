#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
#define loop1()  for(int i=0;i<n;i++)
using namespace std;
int main()
{
  w(t)
  {
    int n;
    cin >> n;
    int i, a[n];
    loop1()
    cin >> a[i];
    int max1 = 0, maxsofar = INT_MIN;
    for (i = 0; i < n; i++) {
      max1 += a[i];
      maxsofar = max(max1, maxsofar);
      if (max1 < 0)
        max1 = 0;

    }
    cout << maxsofar << endl;

  }
}