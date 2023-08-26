class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        vector<int>ans;
        for(auto i:m){
            int t=0;
           
                while(i.second-- && t<2){
                    ans.push_back(i.first);
                    t++;
                }
           
        }
        nums=ans;

        return ans.size();
    }
};