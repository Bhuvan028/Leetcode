class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& iv) {
        vector<vector<int>> ans;
        sort(iv.begin(),iv.end());
        for(int i=0;i<iv.size();i++){
            if(ans.empty()){
                ans.push_back(iv[i]);
            }
            else{
                vector<int>&v=ans.back();
                int y=v[1];
                if(y>=iv[i][0]){
                    v[1]=max(y,iv[i][1]);
                }
                else{
                    ans.push_back(iv[i]);
                }
            }
        }
        return ans;
    }
};