class Solution {
public:

    void backtrack(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int ind,int end){
        if(ind == end){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[ind]);
        backtrack(nums,temp,ans,ind+1,end);

        temp.pop_back();
        backtrack(nums,temp,ans,ind+1,end);
       
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int end=nums.size();
        backtrack(nums,temp,ans,0,end);
        return ans;
    }
};