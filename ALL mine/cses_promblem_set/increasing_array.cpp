#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, n) for (int i = 0; i < n; i++)
#define I cin >>
#define O cout <<

#define SORT(v) sort((v).begin(), (v).end())
#define pb emplace_back
#define vi vector<int>
#define mii map<int, int>
#define si set<int>
#define all(p) p.begin(), p.end()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define next "\n"

using namespace std;

void solve()
{
    ll n;
    I n;
    vi v;
    FOR(i, n)
    {
        ll a;
        I a;
        v.pb(a);
    }
    ll count = 0;
    FOR(i, n - 1)
    {
        if (v[i] > v[i + 1])
        {
            count += v[i] - v[i + 1];
            v[i + 1] = v[i];
        }
    }
    O count;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast

    solve();
    O endl;
    return 0;
}