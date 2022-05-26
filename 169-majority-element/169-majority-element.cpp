class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ele=0;
        int cou=0;
        for(int num:nums){
            if(cou==0){
                ele=num;
            }
            if(ele==num)
                cou++;
            else
                cou--;
        }
        return ele;
    }
    
};