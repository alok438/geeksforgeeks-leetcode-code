#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  set<char> l;
  int n = s.size();
  for (int i = 0; i < n; i++)
    if (isalpha(s[i]))
      l.insert(s[i]);



  cout << l.size() << endl;
}



