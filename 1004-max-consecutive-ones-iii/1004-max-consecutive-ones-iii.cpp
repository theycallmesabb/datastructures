class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        int ans = 0;
        int zerocount=0;
        int len = 0;
        for(high = 0;high<nums.size();high++){
            if(nums[high]==0){
                zerocount++;
            }
           while(zerocount>k){
            if(nums[low]==0){
                zerocount--;
               
            }
             low++;
           }
           len = high-low+1;
             ans = max (ans,len);
        }
      
        return ans;
    }
    
};