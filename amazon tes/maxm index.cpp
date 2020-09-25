int maxIndexDiff(int a[], int n)
{	int ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--) {
			if (a[j] >= a[i]) {
				ans = max(ans, j - i);
				break;
			}
		}
	return ans;
}