class Solution {
public:
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());  //First sort the array
        
        vector<vector<int>> res;
       
        for(int i = 0 ; i<n;i++ ){
            
            for(int j = i+1;j<n;j++){
                
                 int find = target-nums[j]-nums[i];   //Find nums[i]+nums[j] and deduct it from target and search the remaining value in the right subarray
                    
                    int left = j+1;
                    int right = n-1;
					
                //Performing 2 sum in the right subarray
                while(left<right){
				
                    int sum = nums[left]+nums[right];
                    
                    if(sum > find){
                        right--;
                    }else if(sum < find){
                        left++;
                    }else{
                        
                        vector<int>quad(4);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[left];
                        quad[3]=nums[right];
                        res.push_back(quad);         //  11222333444
                        
                     //Removing the duplicates of 3rd number
                      while(left<right && nums[left] == quad[2] ) ++left;
                        
                     //Removing the duplicates of 4th number
                       while(left<right && nums[right] ==  quad[3] ) --right;
                        
                    }       
              
                }
                     //Removing the duplicates of 2nd number
                      while(j+1<n && nums[j+1] ==  nums[j]) j++;
            }
                  //Removing the duplicates of 1st number
                 while(i+1<n && nums[i+1] ==  nums[i]) i++;   
        }
        return res;
    }
};