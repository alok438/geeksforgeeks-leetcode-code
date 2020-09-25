#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int t;cin >> t;
	while(t--){
    	string s1, s2,res="";
    	cin >> s1 >> s2;
         int n=s1.length();
         int m=s2.length();
          int f[26]={0};
          int b[26]={0};
          int i;
    for(i=0;i<n;i++)
        f[s1[i]-'a']++;
    for(i=0;i<m;i++)
        b[s2[i]-'a']++;
    for(i=0;i<n;i++){
        if(f[s1[i]-'a']>0&&b[s1[i]-'a']==0){
             res=res+s1[i];
     }
}           
   for(i=0;i<m;i++){
        if(b[s2[i]-'a']>0 && f[s2[i]-'a']==0){
             res=res+s2[i];
     }
} 
 if(res!="")
    cout<<res<<"\n";
    else 
    	cout<<"-1"<<"\n";
}
	return 0;
}