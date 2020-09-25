int max_path_sum(int a[], int b[], int n, int m)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0, res = 0;
	while (i < n && j < m) {
		if (a[i] < b[j])
			sum1 += a[i++];
		else if (a[i] > b[j])
			sum2 += b[j++];
		else {
			res += max(sum1, sum2);
			sum1 = 0, sum2 = 0;
			while (i < n && j < m && a[i] == b[j])
			{	res = res + a[i++];
				j++;
			}
		}

	}
	while (i < n)
	{sum1 += a[i++];}
	while (j < m)
	{sum2 += b[j++];}
	res += max(sum1, sum2);
	return res;
}