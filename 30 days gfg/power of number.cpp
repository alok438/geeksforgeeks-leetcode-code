#include<bits/stdc++.h>
using namespace std;
# define mod 1000000007
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0)
      {
        rev_num = rev_num*10 + n%10;
        n = n/10;
      }
      return rev_num;
}
long long modfun(long long n, long long rev)
{
    if (rev == 0)return 1;
    if (rev == 1)return n;
    long long y;
    if (rev % 2 == 0) {
        y = modfun(n, rev/2);
        y = (y * y) % mod;
    } 
    else {
        y = ( modfun(n, rev/2) % mod );
        y = ( ( (y * y) % mod ) * n ) % mod;
    }
    return y;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long rev_num = 0;
        rev_num = rev(n);
        long long ans = modfun(n, rev_num);
        cout << ans%mod<<endl;
    }
}