class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int count=0,j=0,i;
        vector<int>fin;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                count=count+1;
                swap(nums[j],nums[i]);
                j++;
            }
            
        }
        
    }
};