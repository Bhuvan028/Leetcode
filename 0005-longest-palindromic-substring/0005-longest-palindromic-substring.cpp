class Solution {
public:
// bool ispalindrome(string s,int i, int j){
//     while(i<j){
//         if(s[i]!=s[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }

string expandfun(string s, int l, int r){
    while(l>=0&&r<s.size()&&s[l]==s[r]){
        l--;
        r++;
    }
    return s.substr(l+1,r-l-1);
}
    string longestPalindrome(string s) {
        string longest="";
        for(int i=0;i<s.size();i++){
            string odd = expandfun(s,i,i);
            string even = expandfun(s,i,i+1);
            if(odd.size()>longest.size()) longest = odd;
            if(even.size()>longest.size()) longest = even;
        }
        

        return longest;
    }
};