
long long maxArea(long long a[], int n)
{
    int area = 0;
    int i = 0, j = n - 1;
    while (i < j) {
        int length;
        length = min(a[i], a[j]);
        area = max(area, length * (j - i));
        if (a[i] < a[j])
            i++;
        else
            j--;
    }
    return area;
}