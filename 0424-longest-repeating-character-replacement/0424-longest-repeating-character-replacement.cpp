class Solution {
public:
int find(vector<int> &a)
{
   int maxc=-1;
   for(int i=0;i<256;i++)
   maxc=max(maxc,a[i]);
   return maxc;
}

    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int> f(256,0);
        int low = 0;
        int res = INT_MIN;
        for(int high=0;high<n;high++){
            f[s[high]]++;
            
            int maxcnt = find(f);
            int len=high-low+1;
           int diff=len-maxcnt;
           while(diff>k)
           {
               f[s[low]]--;
               low++;
               len=high-low+1;
               diff=len-maxcnt;
           }
          
           res=max(res,len);
       }
       return res;


        }

    
};