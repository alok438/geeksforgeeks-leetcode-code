

//Anagram

const int CHAR=256;
bool isAnagram(string c, string d){
     int n=c.length();
     int m=d.length();
     if(n!=m)  
     	return false;
     int count[CHAR]={0};
     for(int i=0;i<=n;i++){
     	count[c[i]-'a']++;
     	count[d[i]-'a']--;
     }
     for(int i=0;i<CHAR;i++)
     	if(count[i]!=0)
     		return false;
        return true;
}


// Check if string is rotated by two places
  
bool isRotated(string s1, string s2){  //amazon    // azonam
    int n=s1.length();
    int m=s2.length();
    if(n!=m)
    	return false;
    if(n<=2||m<=2)
    	return (s1==s2);

    string clockwise="";
    string anticlockwise="";
    anticlockwise+=s2.substr(n-2,2)+s2.substr(0,n-2);
   // cout<<anticlockwise<<endl;        //  amazon
    clockwise+=s2.substr(2)+s2.substr(0,2);
    cout<<clockwise<<" "<<s2.substr(2)<<endl;
    //     onamaz            onam

    return (s1.compare(clockwise)==0||s1.compare(anticlockwise)==0);

}
 

 //  Check if strings are rotations of each other or not
 
 bool areRotations(string s1,string s2){
        string h=s1+s1;
        if(s1.length()!=s2.length())
        	return false;
        if(h.find(s2)!=string::npos)
            return true;
        else
            return false;
}


//Check if a string is Isogram or not

bool isIsogram(string s)
{
  // map<string,int>m;
  int m[26]={0};
   int n=s.length();
   for(int i=0;i<n;i++){
       m[s[i]-'a']++;
   
    if(m[s[i]-'a']>1)
        return false;
      
    }
    return true;
}

//Maximum Occuring Character 

char getMaxOccuringChar(char* s)
{  
  map<char,int>m;
  int c=0;
  char res;
  for(int i=0;s[i]!='\0';i++){
       m[s[i]]++;
  }
    for(auto i:m){
        if(i.second>c){
        	c=i.second;
        	res=i.first
        }
    }
    return res;
}


// Reverse words in a given string 
string reverseWords(string s) { 
      int n=s.length();
      int start=0;
      for(int i=0;i<n;i++){
      	if(s[i]=='.'){
      		reverse(s.begin()+start,s.begin()+i);
      		start=i+1;
      	}
      }
      reverse(s.begin()+start,s.end());
      reverse(s.begin(),s.end());
      return s;
}
void reverse(string s,int l,int h){            // optional
	while(l<=h){
		swap(s[l],s[h]);
		l++;
		h--;
	}
}




// Non Repeating Character
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


// Isomorphic Strings
 
bool areIsomorphic(string s1, string s2){
    
    int n=s1.length();
    int m=s2.length();
    int a[256]={0};
    int b[256]={0};
    if(n!=m){
    	return false;
    }
    for(int i=0;i<n;i++){
    	if(a[s1[i]]!=b[s2[i]]){
    		return false;
    	}
    	a[s1[i]]++;
    	b[s2[i]]++;
   }
   return true;
}

//The Modified String

int modified(string a){
    int ans=0, same=1;
    for(int i=1;a[i];i++){
        if(a[i]==a[i-1]){
            same++;
        }
        else{
            ans+=(same-1)/2;
            same=1;
        }
    }
    
    ans += (same-1)/2;
    return ans;
}

int modified (string s){
 
	int n=s.length();
	int c=0;
	for(int i=0;i<n-2;i++){
		if(s[i]==s[i+1] && s[i]==s[i+2]){
			c++;
		    i++;
		}
	}
	return c;
}

// Sum of number in string

 int findSum(string s){
	 string res="";
	 int sum=0;
	 for(auto i:s){
	 	if(isdigit(i))
	 		res+=i;
	 	else{
	 		sum+=atoi(res.c_str());
	 		res="";
	 	}
	 }
	 	return sum+atoi(res.c_str());
	 }


//  Pangram Checking 

bool checkPangram (string &s){
     int n=s.length();
     if(n<26)
     	return false;
     for(int i=0;i<n;i++){
     	s[i]=tolower(s[i]);
     }
     int alph[26]={0};
     for(int i=0;i<n;i++){
     	if(s[i]>='a'&& s[i]<='z'){
     		alph[s[i]-'a']++;
     	}
     }
     for(int i=0;i<26;i++){
     	if(alph[i]==0){
     		return false;
     	}
     	
     }
     return true;
}


// Minimum indexed character

int minIndexChar(string s, string p){
  unordered_map<char,int>m;
  int n=s.length();
  int l=p.length();
  int minIndex=INT_MAX;
  for(int i=0;i<n;i++){
  	 if (m.find(s[i]) == m.end())
	 	m[s[i]] = i;
		//m[s[i]]++;
  }
  for(int i=0;i<l;i++)
  	if(m.find(p[i])!=m.end() && m[p[i]]<minIndex)
  		minIndex=m[p[i]];
    if(minIndex!=INT_MAX)
    	return minIndex;
    else
    	return -1;
  
}



//Remove common characters and concatenate

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

// Naive Pattern Search

bool search(string pat, string txt) { 
	
	// return txt.find(pat)!=string::npos;
	int n = pat.length();  
    int m = txt.length();  
    int i = 0;  
  
    while (i <=m - n)  {  
        int j;  
     for (j = 0; j < n; j++)  
            if (txt[i + j] != pat[j])  
                break;  
  
        if (j == n) { // if pat[0...M-1] = txt[i, i+1, ...i+M-1]   
            return true;
        }  
        else if (j == 0)  
            i = i + 1;  
        else
            i = i + j; // slide the pattern by j  
    }
    return false;
}

// Rabin Karp - Pattern Searching
 
#define d 256 
// q prime no
bool search(string pat, string txt, int q) { 
int n=txt.length();
int m=pat.length();
int h=1;
for(int i=1;i<m;i++){
    h=(h*d)%q;
}
int p=0,t=0;
for(int i=0;i<m;i++){
    p=(p*d+pat[i])%q;
    t=(t*d+txt[i])%q;
}
for(int i=0;i<=n-m;i++){
    if(p==t){
        bool flag=true;
        for(int j=0;j<m;j++){
            if(txt[i+j]!=pat[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            return true;
        }
    }
    if(i<n-m){
        t=((d*(t-txt[i]*h)+txt[i+m]))%q;
        if(t<0){
            t=t+q;
        }
    }
    
}
return false;
} 
 


//KMP string matching

// Fills lps[] for given patttern pat[0..M-1] 
void computeLPSArray(string pat, int M, int* lps) 
{ 
int len=0;
lps[0]=0;
int i=1;
while(i<M)
{
    if(pat[i]==pat[len])
    {
        len++;
        lps[i]=len;
        i++;
    }
    else
    {
        if(len==0)
        {
            lps[i]=0;
            i++;
        }
        else
        {
            len=lps[len-1];
        }
    }
}
} 

// Returns true if pat found in txt
bool KMPSearch(string pat, string txt) 
{
int N=txt.length();
int M=pat.length();
int lps[M];
computeLPSArray(pat,pat.length(),lps);
int i=0,j=0;
while(i<N)
{
    if(pat[j]==txt[i])
    {
        i++;
        j++;
    }
    if(j==M)
    {
        return true;
        j=lps[j-1];
    }
    else if(i<N && pat[j]!=txt[i])
    {
        if(j==0)
        {
            i++;
        }
        else
        {
            j=lps[j-1];
        }
    }
}
return false;    
}


// Lexicographic Rank Of A String

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
bool uniqueCharacters(string str) { 
     int checker = 0; 
    for (int i = 0; i < str.length(); i++) { 
          int bitAtIndex = str[i] - 'a'; 
        if ((checker & (1 << bitAtIndex)) > 0) { 
            return false; 
        } 
        checker = checker | (1 << bitAtIndex); 
    } 
    return true; 
} 

int findRank(string S) {
 if(!uniqueCharacters(S)){
    return 0;
}
  int ans=1;
  int n=S.length();
  int mul=fact(n);
  int count[256]={0};
   for(int i=0;i<n;i++){
      count[S[i]]++;
  }
 for(int i=1;i<256;i++){
    count[i]+=count[i-1];
  }
 
  for(int i=0;i<n-1;i++){
      mul=mul/(n-i);
      ans+=count[S[i]-1]*mul;
      for(int j=S[i];j<256;j++){
        count[j]--;
    }
}

return ans%1000000007;
}
