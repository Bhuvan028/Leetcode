class Solution {
public:
    int large(int n){ 
        int largest = -1;
        while(n){
            int rem = n % 10;
            largest = max(largest, rem);
            n = n/10;
        }
        return largest;
    }
    int maxSum(vector<int>& nums) {
       int n = nums.size();
        int ans = -1, sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(large(nums[i]) == large(nums[j])){ 
                    sum = nums[i] + nums[j]; 
                    ans = max(ans, sum); 
                }
            }
        }
        return ans;
    }
};