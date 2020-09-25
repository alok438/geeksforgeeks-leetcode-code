void convertToWave(int *a, int n) {
	int i;
	for (i = 0; i < n - 1; i = i + 2)
		swap(a[i], a[i + 1]);

}