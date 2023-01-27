//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        // Write your code here.
         sort(intervals.begin(), intervals.end());
        vector<int> dp(n, -1);
        function<int(int,int)> dfs = [&](int idx, int end) {
            if (idx == n) return 0;
            if (intervals[idx][0] < end) return dfs(idx + 1, end);
            if (dp[idx] != -1) return dp[idx];
            return dp[idx] = max(intervals[idx][2] + dfs(idx + 1, intervals[idx][1]), dfs(idx + 1, end));
        };
        return dfs(0, 0);
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            cin >> intervals[i][0] >> intervals[i][1] >> intervals[i][2];
        }
        Solution obj;
        cout << obj.maximum_profit(n, intervals) << endl;
    }
    return 0;
}

// } Driver Code Ends