class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1 ;
        long long high = *max_element(piles.begin(), piles.end());
        long long ans=INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long total = tot(piles,mid);
            if(total<=h){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
    long long tot(vector<int>piles , int k){
        long long total = 0;
        for(int i=0;i<piles.size();i++){
            total+=ceil((double)piles[i]/(double)k);
        }
        return total;
    }
};