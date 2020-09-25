#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> separateChaining(int hashSize,int arr[],int sizeOfArray);
int main() {
	int t;
	cin>>t;
	while(t--){
	    int hashSize;
	    cin>>hashSize;
	    int sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    for(int i=0;i<sizeOfArray;i++)   cin>>arr[i];
	    vector<vector<int>> hashTable;
	    hashTable = (separateChaining( hashSize, arr, sizeOfArray));
	    for(int i=0;i<hashTable.size();i++){
	        if(hashTable[i].size()>0){
	            cout<<i<<"->";
	            for(int j=0;j<hashTable[i].size()-1;j++){
	                cout<<hashTable[i][j]<<"->";
	            }
	            cout<<hashTable[i][hashTable[i].size()-1];
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
// } Driver Code Ends
vector<vector<int>> separateChaining(int hashSize,int a[],int n){
     vector<vector<int>>hashTable(hashSize);
    for(int i=0;i<n;i++){
        hashTable[a[i]%hashSize].push_back(a[i]);
    }
  return hashTable;
}