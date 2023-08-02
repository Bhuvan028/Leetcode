class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int x=nums.size()/2;
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second==x){
                return i.first;
            }
        }

        return 0;
    }
};