vector<int> printIntersection(int a[], int b[], int n, int m) { 
     int i=0,j=0;
     vector<int>res;
     while(i<n&&j<m){
     	if(i>0 && a[i-1]==a[i]){
     		i++;
     		continue;
     	}
     	if(a[i]<b[j]){
           i++;
     	}
     	else if(a[i]>b[j]){
     		j++;
     	}
     	else{
     		res.push_back(a[i]);
     	    i++;
     	    j++;
     	}
     }
     return res;
}