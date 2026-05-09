class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) {
        int low = *max_element(arr.begin(),arr.end());
        int high =  accumulate(arr.begin(), arr.end(), 0);
        while(low<=high){
            int mid = low+(high-low)/2;
            int numofDays = daysNeeded(arr,mid);
            if(numofDays<=days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
    int daysNeeded(vector<int>& arr, int capacity){
        int days=1;
        int currentload=0;
        for(int w=0;w<=arr.size()-1;w++){
            if(currentload+arr[w] > capacity){
                days++;
                currentload=arr[w];
            }
            else{
                currentload += arr[w];
            }
        }
        return days;
    }
};