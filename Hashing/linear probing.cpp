vector<int> linearProbing(int hashSize,int arr[],int n){
    vector<int> hash(hashSize);
    for(int i=0;i<hashSize;i++)
        hash[i]=-1;
    for(int i=0;i<n;i++) {    
        int hashVal=arr[i]%hashSize;
        if(hash[hashVal]==-1) {
            hash[hashVal]=arr[i];
        }
        else
        {  
            int counter=0;
            int k=(1+arr[i])%hashSize;
            while(counter<hashSize&&hash[k]!=-1)
            {
                 k=(k+1)%hashSize;
                 counter++;
            }
            if(counter<hashSize)    
            hash[k]=arr[i];
        }
    }
    return hash;
}