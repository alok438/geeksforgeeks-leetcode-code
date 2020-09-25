vector<int> largestAndSecondLargest(int n, int a[]) {
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] > max1)
        {   max2 = max1;
            max1 = a[i];
        }
        if (a[i] > max2 && a[i] != max1)
        {max2 = a[i];}

    }
    if (max2 == INT_MIN) {
        max2 = -1;
    }
    vector<int>temp(2);
    temp[0] = max1;
    temp[1] = max2;
    return temp;


}