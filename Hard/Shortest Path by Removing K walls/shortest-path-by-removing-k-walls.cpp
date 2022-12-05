//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        queue<vector<int>>q;
        q.push({0,0,k,0});
        int dir[4][2] = {
            {0,1}, {1,0}, {-1,0}, {0,-1}
        };
        vector<vector<int>>vis(n,vector<int>(m,-1));
        while (!q.empty()){
            int sz = q.size();
            for (auto i = 0; i < sz; i++){
                vector<int>v = q.front(); q.pop();
                if (v[0] == n-1 && v[1] == m-1){
                    return v[3];
                }
                for (auto j = 0; j < 4; j++){
                    int r = dir[j][0] + v[0], c = dir[j][1] + v[1];
                    if (r >= n || r < 0 || c >= m || c < 0 || (vis[r][c] >= v[2] - mat[r][c])){
                        continue;
                    }
                    q.push({r, c, v[2] - mat[r][c], v[3] + 1});
                    vis[r][c] = v[2] - mat[r][c];
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, x;
        
        cin>>n>>m>>k;
        vector<vector<int>> mat;
    
        for(int i=0; i<n; i++)
        {
            vector<int> row;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                row.push_back(x);
            }
            mat.push_back(row);
        }

        Solution ob;
        cout<<ob.shotestPath(mat,n,m,k);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends