class Solution {
public:
    int reverse(int x) {
          try
        {
        string an = to_string(x);
        int len = an.length()-1,cnt=0;
        string revan;
        while(len>=0)
        {
            revan+=an[len];
            --len;
        }
        len = stoi(revan);
            if(x<0)return -len;
        return len;
        }
        catch(out_of_range)
        {
            return 0;
        }
        
        
        
    }
};