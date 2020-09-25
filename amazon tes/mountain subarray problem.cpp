vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries, int q) {
	int left[n];
	left[0] = 0;
	int lastinc = 0;
	int i;
	for ( i = 1; i < n; ++i)
	{
		if (a[i] > a[i - 1])
			lastinc = i;
		left[i] = lastinc;
	}
	int right[n];
	right[n - 1] = n - 1;
	int firstdec = n - 1;
	for ( i = n - 2; i >= 0; i--)
	{
		if (a[i] > a[i + 1])
			firstdec = i;
		right[i] = firstdec;
	}
	vector<bool>res;
	for (int i = 0; i < q; i++)
	{
		int l = queries[i].first, r = queries[i].second;
		if (right[l] >= left[r])
			res.push_back(true);
		else
			res.push_back(false);
	}
	return res;
	delete[] left;
	delete[] right;
}