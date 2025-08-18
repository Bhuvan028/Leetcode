class Solution {
public:

    static bool comp(pair<char, int> a, pair<char, int> b){
            return a.second>b.second;
        }
    string frequencySort(string s) {
        vector<int>arr(256,0);
        map<char,int>mp; string res="";
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>> vec(mp.begin(), mp.end()); 
        sort(vec.begin(), vec.end(), comp);
        for(auto x:vec){
            for(int i=0;i<x.second;i++){
                res+=x.first;
            }
            
        }
        return res;
        

    }
};