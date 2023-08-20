class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto x:arr){
            m[x]++;
        }
        set<int>s;
        for(auto i:m)
            s.insert(i.second);
        //(m.begin(),m.end());
        return s.size()==m.size();
    }
};