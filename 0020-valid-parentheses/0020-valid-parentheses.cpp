class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char,char>m={
            {')','('},
            {']','['},
            {'}','{'}
        };

        for(auto x:s){
            if(x=='[' || x=='{' || x=='('){
                st.push(x);
            }
            else{
                if(st.empty() || st.top()!=m[x] )
                return false;
                st.pop();
            }

        }
        return st.empty();
        
        
    }
};