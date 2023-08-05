class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
       int n=nums.size();
       int i=0;
       vector<int> v;
       while(i<n){
           int poc=0;
           int prc=0;
           set<int>s;
           for(int j=i+1;j<n;j++){
               s.insert(nums[j]);
           }
           poc=s.size();
           s.clear();
           for(int j=0;j<i+1;j++){
               s.insert(nums[j]);
           }
           prc=s.size();
           s.clear();
           v.push_back((prc-poc));
           i++;

       }
       return v;

    }
};