class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]==nums[low] && nums[high]==nums[mid]){
                high-=1;
                low+=1;
            }
            else if(nums[low] <= nums[mid]){
                if(target<=nums[mid] && target>=nums[low]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(target>=nums[mid] && target<=nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};