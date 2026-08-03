class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int high = 0;
        int ans = 0;
        int len = INT_MIN;
        unordered_set<char> mp;

        for(high=0;high<s.size();high++){
            while(mp.find(s[high])!=mp.end()){
                mp.erase(s[low]);
                low++;
            }
            mp.insert(s[high]);
              len = high - low +1;

         ans = max(ans, len);

        }
       
         return ans;
        
    }
};