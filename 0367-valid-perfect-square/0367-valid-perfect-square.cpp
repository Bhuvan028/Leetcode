class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int l=0;
        long long int h=num;
        while(l<=h){
            long long int mid=l+(h-l)/2;
            if(mid*mid == num) return true;
            else if(mid*mid>num) h=mid-1;
            else l=mid+1;
        }
       return false; 
    }
};