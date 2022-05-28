class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                int low=j+1;
                int high=nums.size()-1;
                while(low<high){
                    
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[low]+(long long)nums[high];
                    if(sum==target){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        v.push_back(temp);
                        
                    }
                    if(sum<target){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        return v;
        
    }
};