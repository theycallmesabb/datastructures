class Solution {
public:
void solve(int index , vector<int>&nums, vector<int>&current,vector<vector<int>>& result){
    if(nums.size()==index){
        result.push_back(current);
        return;
    }
    //either take 
   current.push_back(nums[index]);
    solve(index+1,nums,current,result);
    //or not take
    current.pop_back();
    solve(index+1,nums,current,result);
}
    vector<vector<int>> subsets(vector<int>& nums) {
          vector<int> current; 
          vector<vector<int>> result;         
            solve(0,nums,current,result);
        return result;
    }
};