class Solution {
public:
    string findLongestWord(string s, vector<string>& dic) {
        sort(dic.begin(),dic.end());
        string ans="";
        for(auto x: dic){
            int i=0,j=0;
            for(int i=0;i<s.size();i++){
                if(s[i]==x[j]){
                    j++;
                }
                if(x.size()==j){
                    if(x.size()>ans.size()){
                        ans=x;
                    }
                    break;
                }
            }
        }
    return ans;
    }
};