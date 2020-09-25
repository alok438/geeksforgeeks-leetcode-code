 
int firstRepeated(int a[], int n) {
     unordered_map<int,int>m;
     int f=0;
     int ans=-1;
     for(int i=0;i<n;i++){
        m[a[i]]++;
     }
     for(int i=0;i<n;i++){
        if(m[a[i]]>1){
            ans=i+1;
            break;
        }
     }
     return ans
}

/*
vector<int> printNonRepeated(int a[],int n){
     map<int,int>m;
      vector<int>res;
     for(int i=0;i<n;i++){
        m[a[i]]++;
     }
     for(auto i:m){
        if(i.second==1){
            res.push_back(i.first);
        }
     }
     return res;
}
*/


//User function template for C++

// Given two arrays A and B and their sizes N and M respectively 
int NumberofElementsInIntersection (i


    nt a[], int b[], int n, int m ){
     set<int>s;
     int c=0;
     for(int i=0;i<n;i++){
        s.insert(a[i]);
     }
     for(int i=0;i<m;i++){
        if(s.find(b[i])!=s.end()){
            c++;
        }
     }
    return c;

}



bool subArrayExists(int a[], int n){
    int pre_sum=0;
    unordered_map<int.bool>m;
    for(int i=0;i<n;i++){
     pre_sum+=a[i];
      if(pre_sum==0||m[pre_sum]==true)
          return true;
      m[pre_sum]=true;
  }
  return false;
}



pair <string,int> winner(string a[],int n){
     unordered_map<string,int>m;
     int maxi=-1;
     string res="";
     for(auto i:m){
        m[a[i]]++;
     }
     for(auto i:m){
        if(i.second>maxi){
            maxi=i.second;
            res=i.first;
        }
        else if(i.second==maxi && res.compare(i.first)>0)
            res=i.first;
     }
     return pair<string,int>(res,maxi);
} 
   


int subArraySum(int a[], int n, int sum){
      unordered_map<int ,int >m;
      int pre_sum=0;
      int c=0;
      for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(pre_sum==sum)
            c++;
        if(m.find(pre_sum-sum)!=m.end())
           count += m.find(pre_sum - sum)->second; 
            m[pre_sum]++;
      }
    return c;
}       


if(m.find(pre_sum - sum) != m.end()) 
count += m.find(pre_sum - sum)->second;


vector <int> findPairs(int a[], int n) {
    map<int,int>m;
   vector<int>v;
    int maxi=0;
    int mini=0;
    for(int i=0;i<n;i++){
        a[i]=abs(a[i]);
        m[a[i]]++;
    }
    for(auto i:m){
        if(i.second==2){
         v.push_back(-1*(i.first));
         v.push_back(i.first);
        }
    }
   return v; 
} 

    for (int i = 0; i < n; i++) { 
        if (m[abs(arr[i])] == 0) {
            m[abs(arr[i])] = 1; 
        }

        else { 
            result.push_back((-1)*abs(arr[i])); 
            result.push_back(abs(arr[i])); 
            m[abs(arr[i])] = 0; 
        } 
    } 
    return result;

 



vector <int> findPairs(int a[], int n) 
{ 
    vector<int>res; 
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        if(m[abs(a[i])]==0){
            m[abs(a[i])]=1;
        }
        else{
           res.push_back((-1)*abs(a[i]));
           res.push_back(abs(a[i]));
           m[abs(a[i])]=0;

        }

    }
  return res;
}


void sortA1ByA2(int a[], int n, int b[], int m) {
    
}



//User function template for C++

// arr : given array 
// n : size of the given array
ll findSubarray(vector<ll> a, int n ) {
     ll pre_sum=0;
     ll c=0;
     unordered_map<int,int>m;
     for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(pre_sum==0){
            c++;
        }
        if(m.count(pre_sum)!=0){
            c+=m[pre_sum];           // count the  frquency of that element
        }
        m[pre_sum]++;
     }
     return c;
}



long long int countSubarrWithEqualZeroAndOne(int a[], int n){
       for(int i=0;i<n;i++){
        if(a[i]==0)
            a[i]=-1;
       }
       unordered_map<int,int>m;
       long long c=0,pre_sum=0;
       m[0]++;
       for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(m.find(pre_sum)!=m.end()){
            c+=m[pre_sum];
        }
        m[pre_sum]++;
       }
       return c;

}



void sortA1ByA2(int a[], int n, int b[], int m) {
     unordered_map<int,int>mp;
     for(int i=0;i<n;i++){
        mp[a[i]]++;
     }
int j=0;
for(int i=0;i<m;i++){
    while(mp[b[i]]>0){
        a[j++]=b[i];
        mp[b[i]]--;
    }
} 
for(auto i:mp){
    if(i.second>0){
        while(i.second>0){
            a[j++]=i.first;
            i.second--;
        }
    }
 


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int a[], int n){
   int res=0,c=0;
   sort(a,a+n);
   for(int i=0;i<n;i++){
    if(i>0&& a[i]==a[i-1]+1)
        {c++;}
    else
         c=1;

     res=max(res,c);
   }
   return res;
}


int countNonRepeated(int a[], int n){
      unordered_map<int,int>m;
      int c=0;
      for(int i=0;i<n;i++){
        m[a[i]]++;
      }
      for(auto i:m){
        if(i.second==1){
            c++;
        }
      }
     return c;
}



int sumExists(int a[], int n, int sum){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
    if(s.find(sum-a[i])!=s.end())
        return true;
  s.insert(a[i]);

  }
  return false;
    
}


vector<vector<int>> separateChaining(int hashSize,int a[],int n){
    vector<vector<int>> table(hashSize);
    for(int i=0;i<n;i++){
        table[a[i]%hashSize].push_back(a[i]);
    }

}