class Solution {
public:

    bool check(vector<int>nums,int mid,int t){
        double ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=ceil((double)nums[i]/(double)mid);
        }
        cout<<ans<<endl;
        return ans<=t;
    }
    int smallestDivisor(vector<int>& nums, int t) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(check(nums,mid,t)){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};