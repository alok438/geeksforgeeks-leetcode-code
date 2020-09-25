using namespace std;
#define MAX 100001
int kadaens(int a[], int n) {
	int max1 = 0, maxsofar = -1;
	int i;
	for (i = 0; i < n; i++) {
		max1 += a[i];
		if (max1 < 0)
			max1 = 0;
		if (max1 > maxsofar)
			maxsofar = max1;
	}
	return maxsofar;
}
int circularSubarraySum(int a[], int n) {
	int sum = 0, i;
	int mostnegative = -MAX;
	bool positive = false;
	for ( i = 0; i < n; ++i) {
		if (a[i] >= 0 && !positive)
			positive = true;
		if (a[i] < 0)
			mostnegative = max(mostnegative, a[i]);
	}
	for ( i = 0; i < n; ++i)
		sum += a[i];
	int sum1 = kadaens(a, n);
	for (i = 0; i < n; i++) {
		a[i] = -a[i];
	}
	int sum2 = kadaens(a, n);
	if (!positive)
		return mostnegative;
	return max(sum1, (sum + sum2));
}
int main()
{
	int T;
	cin >> T;
	while (T--) {
		int num;
		cin >> num;
		int arr[num];
		for (int i = 0; i < num; i++)
			cin >> arr[i];
		cout << circularSubarraySum(arr, num) << endl;
	}
}