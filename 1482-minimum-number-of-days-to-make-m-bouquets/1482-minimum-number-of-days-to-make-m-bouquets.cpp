class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();
        int low = *min_element(arr.begin(), arr.end());
        int high = *max_element(arr.begin(), arr.end());
        if(n<(long long)m*k)return -1;
       
        while(low<=high){
            int mid = low+(high-low)/2;
            if(possible(arr,mid,m,k)==true){
                
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }

    bool possible(vector<int>& arr, int day, int m, int k){
        int cnt = 0;
        int noofbo=0;
         for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                cnt++;

            }
            else{
                noofbo+=(cnt/k);
                cnt=0;
            }
         }
         noofbo+=(cnt/k);
         if(noofbo>=m)return true;
         else{
            return false;
         }
    }
};