class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         auto x=lower_bound(nums.begin(),nums.end(),target);
        int p=x-nums.begin();
        return p;
        
    }
};