class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int ec) {
        vector<bool> v(nums.size());
        int mx=*max_element(nums.begin(),nums.end());
        bool x=true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]+ec >= mx){
                v[i]=x;
            }
            else{
                v[i]= !x;
            }
        }
        return v;
    }
};