class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=1;i<=nums.size();i++){ 
            if(!binary_search(begin(nums), end(nums), i))   
                v.push_back(i);
        }
        
        return v;
    }
};