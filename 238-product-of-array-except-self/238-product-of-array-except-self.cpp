class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>output;
        if(n<1){
            return output;
        }
        int leftsum=1;
        for(int i=0;i<n;i++){
            leftsum=leftsum*nums[i];
            output.push_back(leftsum);
        }
        int product=1;
        int temp;
        for(int i=n-1;i>0;i--){
            output[i]=output[i-1]*product;
            product=product*nums[i];
        }
        output[0]=product;
        return output;
    }
};