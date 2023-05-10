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
    int a, b;
    I a >> b;
    ll ans = 0;
    if (a > b)
    {
        if (a % 2 == 0)
        {
            ans = (a * a) - b + 1;
        }
        else
        {
            ans = ((a - 1) * (a - 1)) + b;
        }
    }
    else
    {
        if (b % 2 == 0)
        {
            ans = ((b - 1) * (b - 1)) + a;
        }
        else
        {
            ans = (b * b) - a + 1;
        }
    }
    O ans;
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