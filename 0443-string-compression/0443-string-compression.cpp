class Solution {
public:
    int compress(vector<char>& c) {
        int i=0,j=1;
        int count=0;
        string s;
        vector<char>v;
        while(j<c.size()){
            //char s=c[i];
            if(c[j-1]==c[j]){
                j++;
            }
            else{
                 count=j-i;
                 if(count==1) s+=c[i];
                 else{
                     s+=c[i];
                     string x=to_string(count);
                     s+=x;
                 }
                 i=j;
                 j++;
                }
            }
            count=j-i;
                 if(count==1) s+=c[i];
                 else{
                     s+=c[i];
                     string x=to_string(count);
                     s+=x;
                 }
        
        for(int i=0;i<s.size();i++){
            c[i]=s[i];
        }
        return s.size();
    }
};