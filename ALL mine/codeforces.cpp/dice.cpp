#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,n) for (int i = 0; i < n; i++)
#define I cin >>
#define O cout <<

#define SORT(v) sort((v).begin(),(v).end())
#define pb push_back
#define vi vector<int>
#define mii map<int, int>
#define si set<int>
#define all(p) p.begin(), p.end()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;


  
void solve()
{
    int n, s, r;
    int res[n];
    I n >> s >> r;
    int remove = s - r;
    res[0] = remove;

    
    int push = r / (n - 1);
    for (int i = 0; i < n - 1;i++)
    {
        res[i + 1] = push;
        
    }
    res[n - 1] = r - (push * (n - 2));
    FOR(i,n)
    {
        O res[i]<<" ";
    }
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