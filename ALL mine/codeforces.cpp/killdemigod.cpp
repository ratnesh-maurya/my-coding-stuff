
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
    ll n;
    I n;

    ll ans = 0;
    ans += ((n) * (n + 1) * ((2 * n) + 1)) / 6;
    ans = ans % (1000000007);
    n = n - 1;
   ans += ((n) * (n + 1) * ((2 * n) + 1)) / 6;
   ans = ans % (1000000007);
   ans += ((n) * (n + 1)) / 2;
   ans = ans % (1000000007);
   //ans = ans % (1000000007);
   ans = ans * 2022;
   O ans % (1000000007);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("dena.txt", "r", stdin);
    freopen("le_ye_le.txt", "w", stdout);
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