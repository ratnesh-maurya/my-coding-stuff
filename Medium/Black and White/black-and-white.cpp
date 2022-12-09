//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
const long long mod = 1e9 + 7;
long long numOfWays(int n, int m)
{
    int cnt = 0;

    

    int dx[] = {-1,-1,-2,-2,1,1,2,2};

    int dy[] = {-2,2,-1,1,-2,2,-1,1};

    

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            for(int k =0; k<8; k++){

                int cur_x = i + dx[k];

                int cur_y = j + dy[k];

                

                if(cur_x >= 0 && cur_x < n && cur_y >=0 && cur_y < m)

                    cnt += 1;

            }

        }

    }

    

    long long total = 1LL*n*m*(n*m-1)%mod;

    return (total - cnt) % mod;
}