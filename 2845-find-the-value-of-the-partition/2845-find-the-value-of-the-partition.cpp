class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            m=min(nums[i+1]-nums[i],m);
        }
        return m;
    }
};