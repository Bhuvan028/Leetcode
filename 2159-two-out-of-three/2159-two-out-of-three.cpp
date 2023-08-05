class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        map<int,int>map;
          vector<int>ans;
          set<int> set1;

          for(int i=0;i<nums1.size();i++){
              set1.insert(nums1[i]);
          }
           set<int> set2;
          for(int i=0;i<nums2.size();i++){
              set2.insert(nums2[i]);
          }
           set<int> set3;
          for(int i=0;i<nums3.size();i++){
              set3.insert(nums3[i]);
          }

           for(auto i: set1){
               map[i]++;
           }
           for(auto i: set2){
               map[i]++;
           }
           
            for(auto i: set3){
               map[i]++;
           }
            for(auto i: map){
              if(i.second>1){
                 
                  ans.push_back(i.first);
              }
           }
    
     return ans;
    }
};