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
    int n;
    I n;
    string s;
    I s;

    int x = 0;
    int y = 0;
    int p = 1;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='L')
        {
            x = x - 1;
        }
         if(s[i]=='R')
        {
            x = x +1;
        }
         if(s[i]=='D')
        {
            y = y - 1;
        }
        if(s[i]=='U')
        {
            y = y +1;
        }
        if(x==1 and y==1)
        { p = 0;
            O "YES";
            break;
        }
        
    }
    if(p==1)
        {
            O "NO";
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