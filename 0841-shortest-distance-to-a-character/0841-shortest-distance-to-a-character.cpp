class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
  vector<int> pos,ans;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            pos.push_back(i);
        }

        int i=0,j=0;

        while(i<s.length())
        {
            int mini=INT_MAX;
            for(int j=0;j<pos.size();j++)
            {
                mini=min(mini,abs(pos[j]-i));
            }
            ans.push_back(mini);
            i++;

        }
        return ans;
    }
};