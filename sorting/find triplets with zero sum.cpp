bool findTriplets(int a[], int n){ 
     int i,j;
     sort(a,a+n);
     for(i=0;i<n-2;i++){
     	int l=i+1;
     	int r=n-1;
      while(l<r){
          int sum=a[l]+a[r]+a[i];
      	if(sum==0)
      		{return true;}
      	else if(sum<0){
      		l++;
      	}
      	else{
      		r--;
      	}

      }
     } 
     return false;  
}