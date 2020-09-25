long binarySubstring(int n, string a){
    
     int c=0;
     for(int i=0;i<n;i++){
     	if(a[i]=='1')
     		c++;
     }
     return c*(c-1)/2;
    
}


int strstr(string s, string x){
     return x.find(s);  
}