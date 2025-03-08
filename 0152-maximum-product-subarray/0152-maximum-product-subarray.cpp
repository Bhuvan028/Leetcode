class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefixSum=1;
        int suffixSum=1;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(prefixSum==0) prefixSum=1;
            if(suffixSum==0) suffixSum=1;
            prefixSum=nums[i]*prefixSum;
            suffixSum=nums[n-i-1]*suffixSum;

            maxi = max(maxi,max(prefixSum,suffixSum));
        }
        return maxi;
    }
};