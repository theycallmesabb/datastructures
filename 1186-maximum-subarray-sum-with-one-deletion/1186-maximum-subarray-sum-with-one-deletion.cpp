class Solution {
public:
    int maximumSum(vector<int>& a) {
        int noDelete = a[0];
        int oneDelete = INT_MIN;
        int ans = a[0];

        for (int i = 1; i < a.size(); i++) {
            int prevNoDelete = noDelete;
            int prevOneDelete = oneDelete;

            // No deletion
            noDelete = max(a[i], prevNoDelete + a[i]);

            // One deletion
            oneDelete = prevNoDelete;  // delete current element

            if (prevOneDelete != INT_MIN) {
                oneDelete = max(oneDelete, prevOneDelete + a[i]);
            }

            ans = max(ans, max(noDelete, oneDelete));
        }

        return ans;
    }
};