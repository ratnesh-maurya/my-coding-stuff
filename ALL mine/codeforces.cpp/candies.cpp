#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,n) for (int i = 0; i < n; i++)
#define I cin >>
#define O cout <<

#define SORT(v) sort((v).begin(),(v).end())
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
    int n;
    I n;
    vi v;
    int even = 0;
    int odd = 0;
    FOR(i,n)
    {
        int a;
        I a;
        v.pb(a);
        if(a %2==0)
        {
            even = even + a;
        }
        else
        {
            odd = odd + a;
        }
    }
    if(even>odd)
    {
        O "yes" << next;
    }
    else
    {
        O "no" << next;
    }

    
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