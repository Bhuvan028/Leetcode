class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;
        vector<int>powers;
        int res=0;
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                powers.push_back(1<<i);
            }
        }
        vector<int>out;
        for(int i=0;i<queries.size();i++){
            long long rand = 1;
            for(int j=queries[i][0];j<=queries[i][1];j++){
                rand=(rand*powers[j])%MOD;
            }
             
            out.push_back(rand);
        }
        return out;
    }
};