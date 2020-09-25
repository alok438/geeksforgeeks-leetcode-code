
int trappingWater(int a[], int n) {
	int left[n];
	int right[n];
	int water = 0;
	left[0] = a[0];
	right[n - 1] = a[n - 1];
	int i;
	for (i = 1; i < n; i++) {
		left[i] = max(left[i - 1], a[i]);
	}
	for (i = n - 2; i >= 0; i--) {
		right[i] = max(right[i + 1], a[i]);
	}

	for (i = 1; i < n - 1; i++) {
		water += (min(left[i], right[i]) - a[i]);
	}
	return water;
}