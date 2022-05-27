class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int len;
        int width;
        int temp;
        int ans=0;
        while(l<r){
            int lmax=height[l];
            int rmax=height[r];
            temp=min(lmax,rmax);
            len=r-l;
            ans=max(ans,len*temp);
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
            
        }
        return ans;
        
    }
};