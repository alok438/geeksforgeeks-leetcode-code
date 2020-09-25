void segragate012(int A[], int N)
{
    int low = 0, high = N-1, mid = 0;

    while(mid <= high){

        // if any element appears to be 0
        // push that element to start
        if(A[mid]==0)
            swap(A[mid++], A[low++]);
       
        // if element found to be 1
        // push that to the mid
        else if(A[mid]==1)
             mid++;
        
        // if element found to be 2,
        // push it to high
        else
            swap(A[mid], A[high--]);
        }
    
}