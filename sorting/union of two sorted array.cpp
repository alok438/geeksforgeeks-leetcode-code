vector<int> findUnion(int a[], int b[], int n, int m){
int i = 0, j = 0; 
    vector<int> res;
    while (i < n && j < m) { 
        while(i+1<n&&a[i]==a[i+1])  // skip duplicate elemnt in array 1
            i++; 
        
        while(j+1<m&&b[j]==b[j+1])   // skip duplicate elemnt in array 2
            j++; 
      
        if (a[i] < b[j]) 
            res.push_back(a[i++]);  // elemnt of array 1 is smaller than array 2 thrn print the elemnt of array 1
      
        else if (b[j] < a[i])        // elemnt of array 2 is smaller than array 1 thrn print the elemnt of array 2
            res.push_back(b[j++]); 
      
        else
        {
            res.push_back(b[j++]);   // if both the elemnt in array is same then print any one of them and increment both
            i++; 
        }
    }  
  while(i < n)                          // elemnt of array 2 ends
    {
        while(i+1<n&&a[i]==a[i+1])    // skip duplicate elemnt in array 1
            i++; 
        res.push_back(a[i++]); 
    }
  
    while(j < m)                         // elemnt of aray 1 ends
    {
        while(j+1<m&&b[j]==b[j+1])     // skip duplicate elemnt in array 2
            j++;  
        res.push_back(b[j++]);  
    }
    return res;
}