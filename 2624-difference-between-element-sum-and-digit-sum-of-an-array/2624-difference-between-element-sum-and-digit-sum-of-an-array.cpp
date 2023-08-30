class Solution {
public:
int disum(int n){
    int sum=0;
     while(n){
                int r=n%10;
                sum+=r;
                n/=10;
            }
            return sum;
}
    int differenceOfSum(vector<int>& nums) {
        int dsum=0,esum=0;
        for(int i=0;i<nums.size();i++){
           dsum+=disum(nums[i]);
            esum+=nums[i];
        }
        return abs(esum-dsum);
    }
};