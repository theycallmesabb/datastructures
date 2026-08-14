class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int maxEnding = a[0];
        int minEnding = a[0];
int res = a[0];
int maxSum = a[0];
int minSum = a[0];
for(int i=1;i<a.size();i++){
    maxEnding=max(a[i],maxEnding+a[i]);
    minEnding = min(a[i], minEnding + a[i]);
    maxSum = max(maxSum, maxEnding);
    minSum = min(minSum, minEnding);
}   
minSum *=(-1);
    res=max(maxSum,minSum);
    return res;
    }
};