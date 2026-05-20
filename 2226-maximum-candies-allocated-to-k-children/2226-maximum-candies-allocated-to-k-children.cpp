class Solution {
public:
    int maximumCandies(vector<int>& arr, long long k) {
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        while(low<=high){
            long long total = 0;
            long long mid = low+(high-low)/2;
            for(int i=0;i<arr.size();i++){
            total+=arr[i]/mid;
            }
            if(total>=k){
                low = mid +1;
            }
            else{
                high = mid-1;
            }

        }
        return high;
    }
};