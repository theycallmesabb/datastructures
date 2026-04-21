class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x ;
        
        if(x==0)return x;
        while(low<=high){
            long mid = low+(high-low)/2;
            if(mid*mid <= x){
               
               low = mid+1;
                
            }
            else high = mid-1;
        }
        return high;
    }
};