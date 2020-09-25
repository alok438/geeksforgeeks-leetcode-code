
void arrange(long long a[], int n) {
	int i, b[n];
	for (i = 0; i < n; i++)
		b[i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = b[b[i]];
	// delete [] b;

}
