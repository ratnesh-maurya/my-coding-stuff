//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minCost(vector<vector<int>> &c, int N) {
       vector<vector<long long int>> dp(N,vector<long long int>(3,-1));
        //base case assigning to dp
        dp[0][0]=c[0][0];
        dp[0][1]=c[0][1];
        dp[0][2]=c[0][2];
        
        //traversing remaining rows
        for(int i=1;i<N;i++)
        {
            dp[i][0]=c[i][0]+min(dp[i-1][1],dp[i-1][2]);
            dp[i][1]=c[i][1]+min(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=c[i][2]+min(dp[i-1][1],dp[i-1][0]);
        }
        
        return min(dp[N-1][0],min(dp[N-1][1],dp[N-1][2]));
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends