class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int count=0;
        int mc=0;
        for(auto i:nums){
            if(s.find(i-1)==s.end()){
                count=1;
                int x=i;
                while(s.find(x+1)!=s.end()){
                    count++;
                    x++;
                }
            }
            mc=max(mc,count);
        }
        return mc;
    }
};