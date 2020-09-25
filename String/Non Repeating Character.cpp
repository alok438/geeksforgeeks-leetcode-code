#include <bits/stdc++.h>
using namespace std;
string nonrepeatingCharacter(string S);
int main() {
	int T; cin >> T;
	while(T--){
	    int n;
	    cin>>n;
	    string S; cin >> S;
	   cout<<nonrepeatingCharacter(S)<<endl;

	  }
	return 0;
}
string nonrepeatingCharacter(string s){
    unordered_map<char , int> m;
    int n=s.length();
    string res; 
    for(int i=0;i<n;i++){
    	m[s[i]]++;
    }   
    for(int i=0;i<n;i++){
    	if(m[s[i]]==1){
    		res+=s[i];
    		return res;
    	}
    }
    return "-1";
}