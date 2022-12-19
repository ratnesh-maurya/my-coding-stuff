
#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,n) for (int i = 0; i < n; i++)
#define I cin >>
#define O cout <<

#define SORT(v) sort((v).begin(),(v).end())
#define ALL(V) (v).begin(),(v).end()
#define pb push_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

void solve()
{
    int k, n;
    I k>>n;
    int ans[k];

    int p=1;
        for(int i=0;i<k;i++)
       {
          ans[i] = i+1;
       }
       for (int i = 0; i < k;i++)
       {
               if(ans[k-i-1]<n && ans[k-i-2]<n-i)
               {
                   ans[k - i-1 ] = n;
                   n = n - i-1;
               }
             
       }

          sort(ans, ans + k);
          if(ans[k-1]==ans[k-2])
          {
               ans[k - 2] = ans[k - 3] + 1;
          }
       for (auto x : ans)
          cout << x << " ";
       // cout<<ans;
 
   
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
fast
    
        ll tc;
    I tc;
    while (tc--)
    {
        solve();
        O endl;
    }
    return 0;
}