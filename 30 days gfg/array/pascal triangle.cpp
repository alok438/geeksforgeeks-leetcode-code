#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
using namespace std;
void pascal(int n) {
    int c = 1;
    int i, j;
    for (int i = 1; i <= n; i++) {
        cout << c << " ";
        c = c * (n - i) / i;
    }
}
int main()
{
    w(t)
    {
        int n;
        cin >> n;
        pascal(n);
        cout << endl;
    }
}