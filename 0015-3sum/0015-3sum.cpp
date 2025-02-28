class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int t=-a;
            int s=i+1,e=n-1;
            while(s<e){
                if(nums[s]+nums[e]==t){
                    v.push_back({nums[i],nums[s],nums[e]});
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]<t){
                    s++;
                }
                else{
                    e--;
                }

            }
        }
        set<vector<int>>s(v.begin(),v.end());
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};