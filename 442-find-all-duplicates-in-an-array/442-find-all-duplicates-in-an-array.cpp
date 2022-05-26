class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int temp:nums){
            m[temp]++;
            if(m[temp]>1){
                v.push_back(temp);
                
            }
        }
        return v;
    }
};