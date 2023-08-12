class Solution {
public:
 bool isValid(vector<int>& arr,int num,int d)
    {
        int low=0,hi=arr.size()-1,mid;
        while(low<=hi)
        {
            mid=(low+hi)/2;
            if(arr[mid] < num-d)
                low=mid+1;
            else if(arr[mid]> num+d)
                hi=mid-1;
            else
                return false;
        }
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ans=0;
        for(int i=0;i<arr1.size();i++)
        {
            if(isValid(arr2,arr1[i],d))
                ans++;
        }
        return ans;
    }
};