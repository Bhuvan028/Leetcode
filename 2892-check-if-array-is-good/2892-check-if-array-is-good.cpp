class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>st(nums.begin(),nums.end());
        int n=nums.size();
        int s=st.size();
        if(nums[n-1]==n-1 && nums[n-2]==n-1 && n-1==s){
            return true;
        }
        return false;
    }
};