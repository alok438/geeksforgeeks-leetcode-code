void frequencycount(vector<int>& a, int n)
{
	//map<int, int>m;
	for (int i = 0; i < n; i++)
		a[i] -= 1;
	for (int i = 0; i < n; i++)
		//m[a[i]]++;
		a[a[i] % n] += n;
	for (int i = 0; i < n; i++)
		//a[i]=m[i];
		a[i] = a[i] / n;


}