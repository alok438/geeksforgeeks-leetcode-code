int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
  unordered_set<int> s1;
  int c = 0, i;
  for (i = 0; i < n; i++)
    s1.insert(a[i]);
  for (i = 0; i < m; i++)
    if (s1.find(b[i]) != s1.end()) {
      s1.erase(b[i]);
      c++;
    }
  return c;
  s1.clear();
}