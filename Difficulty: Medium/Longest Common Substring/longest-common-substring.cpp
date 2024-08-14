//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int ans = 0;
int solve(int i, int j, string &s1, string &s2, vector<vector<int>> &dp)
{
    if (i >= s1.size() || j >= s2.size())
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int take = 0;
    if (s1[i] == s2[j])
    {
        take = 1 + solve(i + 1, j + 1, s1, s2, dp);
        ans = max(ans, take);
    }
    int exc1 = solve(i + 1, j, s1, s2, dp);
    int exc2 = solve(i, j + 1, s1, s2, dp);
    return dp[i][j] = take;
}
int longestCommonSubstr(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    solve(0, 0, str1, str2, dp);
    return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends