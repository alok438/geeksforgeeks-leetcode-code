// Insert all the element of array arr[] (size N)
// fill the hash table hash[] (size hashSize)
void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int n){
    for(int i=0;i<hashSize;i++)
        hash[i]=-1;
    for(int i=0;i<n;i++) {    
        int hashVal=arr[i]%hashSize;
        if(hash[hashVal]==-1) {
            hash[hashVal]=arr[i];
        }
        else
        {  
            int power=1;
            int k= arr[i]%hashSize;
           while(hash[(k+power*power)%hashSize]!=-1)
            {
                 power++;
            }
            hash[(k+power*power)%hashSize]=arr[i];
        }
    }
}