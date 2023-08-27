class Solution {
public:
    //vector<string> findRelativeRanks(vector<int>& nums) {
        
        // unordered_map<int,string>m;
        // vector<int>v=nums;
        // sort(v.rbegin(),v.rend());
        
        // for(int i=0;i<v.size();i++){
        //     if(i==0) m[v[0]]="Gold Medal";
        //     if(i==1) m[v[1]]="Silver Medal";
        //     if(i==2) m[v[2]]="Bronze Medal";
        //     else m[v[i]]=to_string(i+1);
        // }
        // vector<string>ans(v.size());
        // for(int i=0;i<nums.size();i++){
        //     if(m.find(nums[i])!=m.end()){
        //         ans[i]=m[nums[i]];
        //     }
        // }
        // return ans;

        vector<string> findRelativeRanks(vector<int>& nums) {
  vector<short> idx(nums.size());
  vector<string> res(nums.size());
  iota(begin(idx), end(idx), 0);
  sort(begin(idx), end(idx), [&nums](int i, int j) { return nums[i] > nums[j]; });
  for (auto i = 0; i < nums.size(); ++i)
    res[idx[i]] = i == 0 ? "Gold Medal" : i == 1 ? "Silver Medal" : i == 2 ? "Bronze Medal" : to_string(i + 1);
  return res;


    }
};