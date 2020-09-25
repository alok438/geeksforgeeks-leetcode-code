int maxSubarraySum(int a[], int n) {
	int max1 = 0, maxsofar = INT_MIN;
	int i;
	for (i = 0; i < n; i++) {
		max1 += a[i];
		maxsofar = max(max1, maxsofar);
		if (max1 < 0)
			max1 = 0;

	}

	return maxsofar;



}