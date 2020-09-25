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
void reverse(string s,int l,int h){            // optional   for c++
	while(l<=h){
		swap(s[l],s[h]);
		l++;
		h--;
	}
}
