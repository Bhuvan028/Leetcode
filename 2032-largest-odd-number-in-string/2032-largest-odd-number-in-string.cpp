class Solution {
public:
    string largestOddNumber(string num) {
        long long n = stoll(num); string res;
        
        while(n>0){
            if(n%2==1){
            string res= to_string(n);
            return res;
            }
            n/=10;

        }
        return res;
    
    }
};