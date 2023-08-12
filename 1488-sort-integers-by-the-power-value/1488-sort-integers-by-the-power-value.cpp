class Solution {
public:
int power(int n){
    int c=0;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        c++;
    }
    return c;
}
    int getKth(int lo, int hi, int k) {
        map<int,int>m;
        for(int i=lo;i<=hi;i++){
            m[i]=power(i);
        }
    
    priority_queue<pair<int,int>>p;
    
    for(auto i :m){
        p.push(pair(i.second,i.first));
        while(p.size() > k)
            p.pop();
    }
    
    return p.top().second;
        
    }
};