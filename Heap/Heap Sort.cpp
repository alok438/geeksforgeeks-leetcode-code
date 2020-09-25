void heapify(int a[],int n,int i){
    int largest=i,left=2*i+1, right=2*i+2;
    if(left<n && a[left] > a[largest])
        largest=left;
    if(right<n && a[right] > a[largest])
        largest=right;
    if(largest!=i){
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}
// Rearranges input array so that it becomes a max heap
void buildHeap(int a[], int n)  { 
   for(int i=(n-2)/2;i>=0;i--)
        heapify(a,n,i);
}
