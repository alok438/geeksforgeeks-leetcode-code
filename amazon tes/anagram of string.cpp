int const CHAR = 256;
int remAnagram(string s1, string s2)
{
	int a1[CHARS] = {0}, a2[CHARS] = {0};
	int i;
	for (i = 0; i < s1.size(); i++)
		a1[s1[i] - 'a']++;

	for (i = 0; i < s2.size(); i++)
		a2[s2[i] - 'a']++;

	int ans = 0;
	for (i = 0; i < 26; i++)
		ans += abs(a1[i] - a2[i]);

	return ans;

}