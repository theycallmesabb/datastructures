class Solution {
public:
void mS(vector <int>& nums ,int low, int high){
    if(low>=high)return;
    int mid = low+(high-low)/2;
    mS(nums,low,mid);
    mS(nums,mid+1,high);
    merges(nums,low,high,mid);
}
void merges(vector <int> &nums ,int low, int high , int mid){
    int left = low;
    int right = mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(nums[left]<nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }
     while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
}
    vector<int> sortArray(vector<int>& nums) {
        mS(nums, 0, nums.size() - 1);

        return nums;
    }
};