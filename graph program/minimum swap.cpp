
int minSwaps(int a[], int n){
     pair<int ,int >arr[n];
	 int i,c=0;
	 for(i=0;i<n;i++){
		 arr[i].first=a[i];
	     arr[i].second=i;
	 }
	sort(arr,arr+n);
	vector<bool>vis(n,false);
	for(i=0;i<n;i++){
		if(vis[i]||arr[i].second==i)
			continue;
	    int cycle=0;
		int j=i;
		while(!vis[j]){
			vis[j]=1;
			j=arr[j].second;
			cycle++;
		}
		c+=(cycle-1);
	}
	return c;
}
	 
