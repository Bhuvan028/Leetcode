class Solution {
public:
    int first(int n){
        int x=0;
        while(n){
            x = n%10;
            n/=10;
        }
        return x;
    }
       
    int countBeautifulPairs(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(gcd(first(nums[i]),(nums[j]%10))== 1)cnt++;
            }
        }
        return cnt;
    }

};