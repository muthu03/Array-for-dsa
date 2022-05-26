class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>temp;
        int count;
        for(int i=0;i<nums.size();i++){
            count=count+1;
            temp[nums[i]]++;
            if(temp[nums[i]]==2){
                count=nums[i];
                break;
                
            }
        }
        
        return count;
        
    }
};