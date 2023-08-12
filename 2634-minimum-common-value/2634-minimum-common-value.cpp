class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for(auto i:nums1){
            m[i]++;
        }
        int ans=INT_MAX;
        for(auto i:nums2){
            if(m.count(i)){
                ans=min(ans,i);
            }
        }
        return ans==INT_MAX?-1:ans;
        
        

    }
};