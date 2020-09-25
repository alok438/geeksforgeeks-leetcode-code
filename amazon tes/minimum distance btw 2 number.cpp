int minDist(int a[], int n, int x, int y) {
    long long int min = n;
    long long int l = INT_MIN;
    long long int r = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            l = i;
        if (a[i] == y)
            r = i;
        if (abs(r - l) < min)
            min = abs(r - l);

    }
    if (min == n)
        return -1;
    else
        return min;

}