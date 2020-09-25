void merge(int a[], int b[], int n, int m) { 
     int i=0,j=0;
     while(i<n && j<m){
        if(a[i]>b[j]){
        	cout<<b[j++]<<" ";
        }
       else if(a[i]<b[j]){
        	cout<<a[i++]<<" ";
        }
        else{
        	cout<<b[j++]<<" ";
        	i++;
        }
    }
        while(i<n){
        	cout<<a[i++]<<" ";
        }
        while(j<m){
        	cout<<b[j++]<<" ";
        }
     
} 
