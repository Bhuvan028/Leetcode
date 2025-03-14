class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        // vector<int>dp(n+1,-1);
        int prev2=nums[0];
        if(n==1) return prev2;
        int prev1=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            int curr=max(nums[i]+prev2,prev1);
            prev2=prev1;
            prev1=curr;

        }
        return prev1;
    }
};