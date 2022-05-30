class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int intial;
        int low;
        int high;
        int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<nums.size();i++){
            intial=nums[i];
            low=i+1;
            high=nums.size()-1;
            while(low<high){
                
                if(intial+nums[low]+nums[high]==target){
                    return target;
                }
                else if(abs(intial+nums[low]+nums[high]-target)<diff)
                {
                    diff=abs(intial+nums[low]+nums[high]-target);
                    ans=intial+nums[low]+nums[high];
                }
                if(intial+nums[low]+nums[high]>target){
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return ans;
    }
};