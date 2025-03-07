class Solution {
public:
bool checkPrime(int n){
    if (n <= 1) return false;
            if (n <= 3) return true;
            if (n % 2 == 0 || n % 3 == 0) return false;
            for (int i = 5; i * i <= n; i += 6) {
                if (n % i == 0 || n % (i + 2) == 0)
                    return false;
            }
            return true;
}
    vector<int> closestPrimes(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            if(checkPrime(i)){
                v.push_back(i);
            }
        }
        int mini=INT_MAX;
        vector<int>res={-1,-1};
        if(v.size()<2){
            return res;
        }
        for(int i=1;i<v.size();i++){
           int diff= v[i]-v[i-1];
           if(diff<mini){
            mini=diff;
            res={v[i-1],v[i]};
           }
            
        }
        return res;

    }
};