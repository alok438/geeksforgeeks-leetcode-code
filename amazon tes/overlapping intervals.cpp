#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> overlappedInterval(vector<pair<int, int>> vec, int n) {
  int i, j = 0;
  sort(vec.begin(), vec.end());
  for (i = 1; i < n; i++) {
    if (vec[j].second >= vec[i].first) {
      vec[j].second = max(vec[j].second, vec[i].second);
    }
    else {
      j++;
      vec[j].first = vec[i].first;
      vec[j].second = vec[i].second;
    }
  }
  vec.erase(vec.begin() + j + 1, vec.end());
  return vec;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<pair<int, int> > arr, res;
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> x >> y;
      arr.push_back(make_pair(x, y));
    }
    res = overlappedInterval(arr, n);
    for (int i = 0; i < res.size(); i++)
      cout << res[i].first << " " << res[i].second << " " ;
    cout << endl;
  }
}

