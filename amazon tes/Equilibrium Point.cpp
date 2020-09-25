int equilibriumPoint(long long a[], int n) {

    if (n < 2)
        return 1;
    int i;
    int leftsum = 0, sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    for (i = 0; i < n; i++) {
        sum -= a[i];
        if (leftsum == sum)
            return i + 1;

        leftsum += a[i];
    }
    return -1;
    delete[] a;

}