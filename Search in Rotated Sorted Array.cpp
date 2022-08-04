class Solution
{
public:

int search(vector<int> &nums, int target)
{
    int s = 0, e = nums.size() - 1, mid;
    int n = nums.size();
    mid = (s+e)/2;
    if(nums[mid]==target) return mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (nums[mid] == target)
            return mid;

        if (nums[s] <= nums[mid])
        {
            if(nums[s]<=target && nums[mid]>=target)
                e = mid-1;
            else
            {
                s = mid + 1;
            }
        }
        else if(nums[mid+1]<=nums[e])
        {
            if(nums[mid+1]<=target && nums[e]>=target)
                s=mid+1;
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}
};
