class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int sum = 0;
        int rev = 0;
        while(temp>0){
        sum = temp%10;
        rev = rev*10+sum;
        temp=temp/10;
        }
        int fs=0;
        fs = n-rev;
    
        return abs(fs);
    }
};