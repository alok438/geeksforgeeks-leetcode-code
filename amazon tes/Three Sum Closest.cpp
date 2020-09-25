int threeSumClosest(vector<int> a, int s) {
	int i, j;
	int n = a.size();
	int res;
	sort(a.begin(), a.end());
	for (i = 0; i < n - 2; i++) {
		int l = i + 1, r = n - 1;

		while (l < r) {
			int sum = a[i] + a[l] + a[r];
			if (abs(sum - s) < abs(res - s))
				res = sum;
			else if (abs(sum - s) == abs(res - s)) {
				if (sum > res)
					res = sum;
			}
			if (sum > s)
			{r--;}
			else
			{l++;}
		}
	}

	return res;
}