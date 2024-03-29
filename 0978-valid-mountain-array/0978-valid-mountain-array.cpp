class Solution {
public:
    bool validMountainArray(vector<int>&A) {
    if(A.size()<3) return false;
    
    int pointer=1;
    while(pointer<A.size()){
    	if(A[pointer-1]<A[pointer]) pointer++;
    	else break;
	}
	
	
	if(pointer==A.size()||pointer==1) return false;
	while(pointer<A.size()){
		if(A[pointer-1]>A[pointer]){
			pointer++;
		} else break;
	}
	
	if(pointer==A.size()) return true;
	else return false;
    }
};