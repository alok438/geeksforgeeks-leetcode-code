vector<int> SortBinaryArray(vector<int> a)
{
  int n = a.size();
  int i;
  int c0 = 0, c1 = 0;
  for (i = 0; i < n; i++) {
    if (a[i] == 0)
      c0++;
    else
      c1++;
  }
  for (i = 0; i < c0; i++)
    a[i] = 0;
  for (i = 0; i < c1; ++i)
    a[c0 + i] = 1;

  return a;
  a.clear();

}