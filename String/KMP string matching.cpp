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
