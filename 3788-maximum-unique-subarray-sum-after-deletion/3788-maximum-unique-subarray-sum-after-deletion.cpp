class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int>s; int maxNeg=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                s.insert(nums[i]);
            }
            else{
                maxNeg = max(maxNeg,nums[i]);
            }
        }
        if(s.empty()) return maxNeg;
        int sum=0;
        for(auto x:s){
            sum+=x;
        }
        return sum;
    }
};