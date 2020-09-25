#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
#define loop1()  for(int i=0;i<n;i++)
using namespace std;
int main()
{
  w(t)
  {
    long long  int n;
    cin >> n;
    long long int i, a[n];
    loop1()
    cin >> a[i];
    long long  int missing = 0, repeat = 0;
    long long   int   totalsum = n * (n + 1) / 2, totalprod = (n * (n + 1) * (2 * n + 1)) / 6;
    for (i = 0; i < n; i++) {
      totalsum -= a[i];
      totalprod -= a[i] * a[i];
    }
    missing = (totalsum + totalprod / totalsum) / 2;
    repeat = missing - totalsum;

    cout << repeat << " " << missing;
    cout << endl;

  }
}