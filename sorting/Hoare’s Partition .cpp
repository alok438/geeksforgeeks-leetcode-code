int partition (int a[], int low, int high){
     
    int pivot=a[low];
    int i=low-1 ,j=high+1;
    while(true){
    	do {
    		i++;
    	}    while(a[i]<pivot);
    	do{       		j--;
    	}      while(a[j]>pivot);
    	if(i>=j)  return j;
    	swap(a[i],a[j]);
    }
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}