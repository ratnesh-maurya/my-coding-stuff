/*
  walktober 
  code by @ratnesh maurya
  15/10/2022
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int w = 1; w <= t; w++)
    {
        int m, n, p;
        cin >> m >> n >> p;
        int arr[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int maxi = 0;
            for (int j = 0; j < m; j++)
            {
                maxi = max(maxi, arr[j][i]);
            }
            if (arr[p - 1][i] < maxi)
                ans += maxi - arr[p - 1][i];
        }
        cout << "Case #" << w << ": " << ans << endl;
    }
    return 0;
}