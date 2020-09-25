#include <bits/stdc++.h>
using namespace std;
void stockbuy(int a[], int n) {
    int sell = 0, buy = 0, i = 0;
    while (i < n - 1) {
        while (i < n - 1 && (a[i] >= a[i + 1]))
            i++;
        if (i == n - 1)
            break;
        buy = i++;
        while (i < n && (a[i] >= a[i - 1]))
            i++;
        sell = i - 1;
        cout << "(" << buy << " " << sell << ")";
    }
    if (buy == 0 && sell == 0)
        cout << "No Profit";
    cout << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stockbuy(a, n);
    }
}