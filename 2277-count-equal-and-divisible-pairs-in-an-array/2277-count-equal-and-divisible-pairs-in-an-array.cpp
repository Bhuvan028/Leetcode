class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
         int n = nums.size();
		
        unordered_map<int,vector<int>> m;
        int count = 0;
        for(int i = 0; i < n; i++) 
        {
            if(m.find(nums[i]) != m.end()) 
            {
                for(auto  j: m[nums[i]]) 
                    if((i * j) % k == 0)
                        count++;
            }
            
            m[nums[i]].push_back(i);
        }
        return count;
    }
};