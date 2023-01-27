
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
    int n;
    I n;
   
    int a[n];
    FOR(i,n)
    {
        I a[i];
    }
    int p[n];
    p[0] = a[0];
    FOR(i,n)
    {
        p[i] = p[i - 1] + a[i];
    }
    int s = p[n - 1];
    int res = 0;
    for(i,n)
    {
        res = max(res, __gcd(p[i], sum - p[i]));
    }
    O res;
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
        
    }
    return 0;
}