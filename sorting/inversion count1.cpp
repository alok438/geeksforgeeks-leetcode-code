long long count=0;

void merge(long long a[],long long  l,long long mid,long long h){
	long long  n1=mid-l+1,n2=h-mid;
	long long  left[n1],right[n2];
	for(long long i=0;i<n1;i++)
		left[i]=a[l+i];
	for(long long i=0;i<n2;i++)
		right[i]=a[mid+1+i];
	 long long  i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(left[i]<=right[j]){
			a[k]=left[i];
			i++;
		}
		else{
			a[k]=right[j];
			j++;
		    count+=(n1-i);
		}
		k++;
	}
	while(i<n1){
		a[k++]=left[i++];
	}
	while(j<n2){
		a[k++]=right[j++];
	}


}


void mergesort(long long  a[],long long  left,long long right){
	if(right>left){
		long long  mid=left+(right-left)/2;
		mergesort(a,left,mid);
		mergesort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}

long long int inversionCount(long long a[], long long n){
      mergesort(a,0,n-1);
      long long int res=count;
      count =0;
      return res;
  }


