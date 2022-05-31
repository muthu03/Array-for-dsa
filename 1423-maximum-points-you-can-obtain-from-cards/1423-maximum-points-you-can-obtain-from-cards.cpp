class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int ans=0;
        int res=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            res=res+cardPoints[i];
            
        }
        int curr_sum=res;
        int j=1;
        for(int i=k-1;i>=0;i--){
            curr_sum=curr_sum+cardPoints[n-j]-cardPoints[i];
            j++;
            res=max(res,curr_sum);
        }
        return res;
    }
};