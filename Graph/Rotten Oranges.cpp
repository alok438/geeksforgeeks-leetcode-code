#include <bits/stdc++.h>
using namespace std;
void ROTutil(vector<vector<int> > &mat, int r, int c,int x,int y,queue<pair<int,int>>&q,vector<vector<int>>&vis){
	 if(x+1<r && (mat[x+1][y]==1) && !vis[x+1][y]){
	 	mat[x+1][y]=2;
	 	q.push({x+1,y});
	 }
	 if(x-1>=0 && (mat[x-1][y]==1) && !vis[x-1][y]){
	 	mat[x-1][y]=2;
	 	q.push({x-1,y});
	 }
	 if(y-1>=0 && (mat[x][y-1]==1) && !vis[x][y-1]){
	 	mat[x][y-1]=2;
	 	q.push({x,y-1});
	 }
	 if(y+1<c && (mat[x][y+1]==1) && !vis[x][y+1]){
	 	mat[x][y+1]=2;
	 	q.push({x,y+1});
	 }
}
 
int rotOranges(vector<vector<int> > &mat, int r, int c){
    queue<pair<int,int>>q;
    vector<vector<int>>vis(r,vector<int>(c,false));
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++)
    		if(mat[i][j]==2){
    			q.push({i,j});
    		}
    }
    q.push({-1,-1});
    int ans=0;
    while(!q.empty()){
    	pair<int,int>p=q.front();
    	q.pop();
    	int x=p.first;
    	int y=p.second;
    	if(x<0){
    		ans=max(ans,abs(x));
    		 if(!q.empty())
                q.push({x-1, y-1});
            continue;
    	}
    	vis[x][y]=1;
    	ROTutil(mat, r, c, x, y, q, vis);

    }
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++)
    		if(mat[i][j]==1){
    			return -1;
    		}
    	}
    	return ans-1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int R,C;
        cin>>R>>C;
        vector<vector<int> > matrix(R);
        for(int i=0;i<R;++i){
            matrix[i].resize(C);
            for(int j=0;j<C;++j)
                cin>>matrix[i][j];
        }
        cout<<rotOranges(matrix,R,C)<<endl;
    }
    return 0;
}







// TLE

int rotOranges(vector<vector<int> >&A, int n, int m) {
        int count = 0;
        bool rotting = true, fresh = true;
        
        while (rotting) {
            rotting = fresh = false;
            
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (!fresh && A[i][j] == 1) 
						fresh = true;
                    else if (A[i][j] == count + 2) {
                        if (i > 0 && A[i - 1][j] == 1)
                            rotting = A[i - 1][j] = count + 3;
                        if (i < n - 1 && A[i + 1][j] == 1)
                            rotting = A[i + 1][j] = count + 3;
                        if (j > 0 && A[i][j - 1] == 1)
                            rotting = A[i][j - 1] = count + 3;
                        if (j < m - 1 && A[i][j + 1] == 1)
                            rotting = A[i][j + 1] = count + 3;
                    }
                }
            }
            
            if (rotting)
				count++;
        }
        return fresh ? -1 : count;
    }

 