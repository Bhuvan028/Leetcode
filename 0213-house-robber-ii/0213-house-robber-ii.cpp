class Solution {
public:

int maxRob(vector<int>nums){
    int n=nums.size();
    int prev2=nums[0];
    if(n==1) return prev2;
    int prev1 = max(nums[1],nums[0]);
    for(int i=2;i<n;i++){
        int curr = max(prev2+nums[i],prev1);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        vector<int>v1,v2;
        for(int i=0;i<nums.size();i++){
            if(i!=0){
                v1.push_back(nums[i]);
            }
            if(i!=nums.size()-1){
                v2.push_back(nums[i]);
            }
        }
        int ans = max(maxRob(v1),maxRob(v2));
        return ans;
    }
};