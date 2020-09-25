vector<int> duplicates(int a[], int n) {
    map<int, int>m;
    vector<int>res;
    int i, f = 0;
    for (i = 0; i < n; i++)
        m[a[i]]++;
    for (auto i : m) {
        if (i.second > 1) {
            res.push_back(i.first);
            f = 1;
        }
    }
    if (f == 0) res.push_back(-1);
    return res;
}