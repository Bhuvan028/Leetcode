class Solution {
public:

   bool check(vector<int>arr,int mid,int k,int m){
        int count=0; int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid){
                count++;
            }
            else{
                ans+=(count/k);
                count=0;
            }
        }
        ans+=count/k;
        return ans>=m;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    int low=mini,high=maxi;
    long long val = m * 1LL * k * 1LL;
        if(val>arr.size()){
            return -1;
        }
        while(low<=high){
            int mid = (low+high)/2;
            
            if(check(arr,mid,k,m)){              
                
                 high = mid - 1;
            }
            else{
               low = mid + 1;
            }
            
        }
       return low;
    }
};