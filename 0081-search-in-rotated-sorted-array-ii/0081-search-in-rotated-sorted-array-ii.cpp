class Solution {
public:
    bool search(vector<int>& nums, int target) {
        auto x = find(nums.begin(),nums.end(),target);
        if(x!=nums.end()){
            return true;
        }
        return false;
    }

};