class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> v;
        for(int i=1;i<nums.size();i++){
            int sum=(nums[i-1]+nums[i])%10;
            v.push_back(sum);
        }
        //int res= triangularSum(v);
        
        return triangularSum(v);
    }
};