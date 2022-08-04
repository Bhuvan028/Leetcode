class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0,h = nums.size()-1;
        int foc=-1,loc=-1;
        int x = target;
        while(l<=h){
        int mid = l + (h-l)/2;
            if(x == nums[mid]){
                foc = mid;
                h = mid-1;
            }
            else if(x < nums[mid]){
                h = mid-1;
            }
            else 
                l = l+1;
        }
        
        l=0;  h = nums.size()-1;
        while(l<=h){
        int mid = l + (h-l)/2;
            if(x == nums[mid]){
                loc = mid;
                l = mid+1;
            }
            else if(x < nums[mid]){
                h = mid-1;
            }
            else 
                l = l+1;
        }
      return {foc,loc};
    }
};
