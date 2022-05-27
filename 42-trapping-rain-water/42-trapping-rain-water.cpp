class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int leftmax=height[l];
        int rightmax=height[r];
        int ans=0;
        while(l<r){
            if(leftmax<rightmax){
                l=l+1;
                leftmax=max(leftmax,height[l]);
                ans=ans+leftmax-height[l];
            }
            else{
                r=r-1;
                rightmax=max(rightmax,height[r]);
                ans=ans+rightmax-height[r];
            }
        }
        return ans;
        
        
    }
};