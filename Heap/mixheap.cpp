// Heap implementation

class MinHeap{
	int [] a;
	int size;
	int capacity;
	MinHeap(int c){
		a=new int[c];
		size=0;
		capacity=c;
	}
	int left(int i) { return (2*i+1); }
	int right(int i) { return (2*i+2); }
	int parent(int i) { return (i-1)/2; }

}

// Insert 

void insert(int x){
	if(size==capacity)
		return;
	size++;
	a[size-1]=x;
	for(int i=size-1;i!=0 && a[parent(i)]>a[i]){
		swap(a[i],a[parent(i)]);
		i=parent(i);
	}
}

// MinHeapify

int a[];
int size,capacity;
void MinHeapify(int i){
	int lt=left(i),rt=right(i);
	int smallest =i;
	if(lt<size && a[lt]<a[i])
		smallest=lt;
	if(rt<size && a[rt] < a[smallest])
		smallest=rt;
	if(smallest!=i){
		swap(a[i],a[smallest]);
		MinHeapify(smallest);
	}
}

// Extract Min

int ExtractMin(){
	if(size==0)
		return INT_MAX;
	if(size==1){
		size--;
		return a[0];
	}
	swap(a[0],a[size-1]);
	size--;
	MinHeapify(0);
	return a[size];
}

// Decrease Key

int a[];
int size,capacity;
void DecreaseKey(int i,int x){
	a[i]=x;
	while(i!=0 && a[parent(i)]){
		swap(a[i],a[parent(i)]);
		i=parent(i);
	}
}

// Build Heap

int a[];
int size,capacity;
void BuildHeap(){
	for(int i=(size-2)/2;i>=0;i--)
		MinHeapify(i);
}

// Heap Sort

void MaxHeapify(int a[],int n;int i){
	int largest=i,left=2*i+1, right=2*i+2;
	if(left<n && a[left] > a[largest])
		largest=left;
	if(right<n && a[right] > a[largest])
		largest=right;
	if(largest!=i){
		swap(a[largest],a[i]);
		MaxHeapify(a,n,largest);
	}
}

void BuildHeap(){
	for(int i=(n-2)/2;i>=0;i--)
		MaxHeapify(a,n,i);
}

void HeapSort (int a[],int n){
	BuildHeap(a,n);
	for(int i=n-1;i>=1;i--){
		swap(a[0],a[i]);
		MaxHeapify(a,i,0);
	}
}

// 

