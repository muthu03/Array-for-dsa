class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefix_sum=0;
        int rem;
        int count=0;
        unordered_map<int,int>map;
        map[0]=1;
        for(auto n:nums){
            prefix_sum=prefix_sum+n;
            rem=prefix_sum%k;
            if(rem<0){
                rem=k+rem;
            }
            if(map.find(rem)!=map.end()){
                count=count+map[rem];
            }
            map[rem]++;
        }
        return count;
    }
};