class Solution {
public:

    long long cal(vector<int>piles,int mid){
        long long toh=0;
        for(int i=0;i<piles.size();i++){
            toh+=ceil((double)piles[i]/(double)mid);
        }
        return toh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1; auto it = max_element(piles.begin(),piles.end());
        int high = *it;
        
        while(low<=high){
            int mid=(low+high)/2;
            long long toh = cal(piles,mid);
            if(toh<=h){
                
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return low;
    }
};