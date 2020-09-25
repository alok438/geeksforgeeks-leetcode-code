#include<bits/stdc++.h>
using namespace std;
void kthLargest(int k){
    priority_queue<int,vector<int>, greater<int>>q;
    int N;
    int nn;
    cin>>nn;
    for(int i=0;i<nn;i++){
        cin>>N;
        if(q.size() < k)
            q.push(N);
       else{ 
           if(N > q.top()){
            q.pop();
            q.push(N);
        }
       }
        if(q.size()<k)
            cout<<-1<<" ";
        else
            cout<<q.top()<<" ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
    kthLargest(k);
    cout<<endl;
    }
    return 0;
}