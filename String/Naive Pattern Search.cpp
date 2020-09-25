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
  
        if (j == n) {    
            return true;
        }  
        else if (j == 0)  
            i = i + 1;  
        else
            i = i + j; // slide the pattern by j  
    }
    return false;
}