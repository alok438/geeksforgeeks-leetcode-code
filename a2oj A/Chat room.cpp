#include<bits/stdc++.h>
using namespace std;
int main()
{

	string s;
	string b = "hello";
	cin >> s;
	int i, j = 0, c = 0;
	int n = s.length();
	for (i = 0; i < n; i++) {
		if (s[i] == b[j]) {
			j++;
			c++;
			if (c == 5) {
				break;
			}
		}
	}

	if (c == 5)
	{cout << "YES";}
	else
	{cout << "NO";}


}