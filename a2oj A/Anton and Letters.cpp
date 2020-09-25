#include<bits/stdc++.h>
using namespace std;
int main() {

	string s;
	getline(cin, s);
	set<char>se;
	int n = s.size();
	int i;
	for (i = 0; i < n; i++) {
		if (isalpha(s[i]))
			se.insert(s[i]);
	}
	cout << se.size();


}