class Solution {
public:
    int divide(long long int dd,long long int dr) {
        // long long int count=0;
        if(dd==-1&&dr==-1) return 1;
         if(dd==-2147483648 && dr==-1) return 2147483647;
        // if((dd<0 && dr>0)|| (dr<0 && dd>0)){
        //     dd=abs(dd);
        //     dr=abs(dr);
        //     while(dd>=dr){
        //         dd-=dr;
        //         count++;
        //     }
        //     count= -count;
        //     return count;
        // }
        // else{
        //     while(dd>=dr){
        //         dd-=dr;
        //         count++;
        //     }
        // }
        //long long int = 
        return dd/dr;
    }
};