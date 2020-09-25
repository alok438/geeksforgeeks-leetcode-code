#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
using namespace std;
int main()
{
  w(t)
  {
    int n;
    cin >> n;
    int mat[n][n];
    int i, j;
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        cin >> mat[i][j];
      }
    }
    for (i = 0; i < n; i++) {
      for (j = i; j < n; j++) {

        swap(mat[i][j], mat[j][i]);
      }
    }
    for (i = 0; i < n; i++) {
      int k = n - 1;
      for (j = 0; j < k; j++, k--) {

        swap(mat[j][i], mat[k][i]);
      }
    }
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {

        cout << mat[i][j] << " ";
      }
    }
    cout << endl;

  }
}