class Solution {
public:
    int triangleNumber(vector<int>& a) {
        int n=a.size();
         sort(a.begin(),a.end());
         int i;
         int c=0;
        for(i=n-1;i>=1;i--){
        	int l=0,r=i-1;
        	while(l<r){
        		if(a[l]+a[r]>a[i]){
        			c+=r-l;
        			r--;
        		}
        		else
        			l++;
        	}
        }
        return c;

    }
};