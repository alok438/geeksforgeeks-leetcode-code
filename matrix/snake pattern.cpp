#include <bits/stdc++.h>
using namespace std;

void print(int mat[][100],int n){
    // Traverse through all rows
    for (int i = 0; i < n; i++) {

        // If current row is even, print from
        // left to right
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++)
                cout << mat[i][j] << " ";

        // If current row is odd, print from
        // right to left
        } else {
            for (int j = n - 1; j >= 0; j--)
                cout << mat[i][j] << " ";
        }
    }
}

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    print(a,n);
    cout<<endl;
    }
    return 0;
}
