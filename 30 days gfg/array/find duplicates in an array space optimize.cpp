vector<int> duplicates(int a[], int n) {
  int i, index;
  for (i = 0; i < n; i++) {
    index = a[i] % n;
    a[index] += n;
  }
  vector<int>res;
  int f = 0;
  for (i = 0; i < n; i++)
    if ((a[i] / n) > 1) {
      res.push_back(i);
      f = 1;
    }
  if (f == 0) res.push_back(-1);

  return res;
  res.clear();


}