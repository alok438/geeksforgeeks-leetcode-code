int closer(int a[],int n, int x){
     int l=0,r=n-1;
     
     while(l<=r){
         int mid=l+(r-l)/2;
         if(a[mid]==x){//||a[mid+1]==x||a[mid-1]==x){
         return mid;
         }
         if(mid>l&&a[mid-1]==x){
             return mid-1;
         }
         if(mid<r&&a[mid+1]==x){
             return mid+1;
         }
         if(a[mid]<x){
             l=mid+2;
         }
         else
             r=mid-2;
     }
    return -1;
}