void binSort(int a[], int n){
    int c0 = 0, c1 = 0;
	    for(int i = 0; i < n; i++)
	    {
	        if(a[i] == 0)
	          c0++;
	        if(a[i] == 1)
	           c1++;
	    }
	    
	    for(int i = 0; i <c0; i++)
	        a[i]=0;
	    for(int i = c0; i <n; i++)
	        a[i]=1;
	      
   int low =0,high = N-1;
   while(low<high)
   {
        if(A[low] == 0)
            low++;
        else
            swap(A[low],A[high--]);
   } 
    
}