class Solution {
public:
    int findContentChildren(vector<int>& c, vector<int>& s) {
        sort(c.begin(),c.end());
        sort(s.begin(),s.end());

        int l=0,r=0;
        while(l<s.size() && r<c.size()){
            if(s[l]>=c[r]){
                r++;
                l++;
            }
            else{
                l++;
            }

        }
        return r;

    }
};