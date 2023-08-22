class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>> mp;

        for(auto x:s){
            string st = x;
            sort(st.begin(),st.end());
            mp[st].push_back(x);
        }

        vector<vector<string>> v;
        for(auto i:mp){
            v.push_back(i.second);
        }
        return v;
    }
};