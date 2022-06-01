class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum,temp=-1;
        int rsum,lsum=0;
        sum=accumulate(nums.begin(), nums.end(), 0);
        rsum=sum;
        for(int i=0;i<nums.size();i++){
            rsum=rsum-nums[i];
            
            if(lsum==rsum){
                return i;
                
            }
            lsum=lsum+nums[i];
            
        }
        return -1;
    }
};