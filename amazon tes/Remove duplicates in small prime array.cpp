vector<int> removeDuplicate(vector<int>& a, int n)
{
	int dp[101] = {0};
	vector<int>res;
	int i;
	for (i = 0; i < n; i++) {
		if (dp[a[i]] == 0) {
			dp[a[i]] = 1;
			res.push_back(a[i]);
		}
	}
	return res;
}