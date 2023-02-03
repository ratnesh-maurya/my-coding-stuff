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
    int a[n];
    FOR(i,n)
    {
        I a[i];
    }
    int count=0;
    vi v;
    int sum=0;
    FOR(i,n)
    {
        v.pb(abs(a[i]));
        if(a[i]<0)
        {
            count++;
        }
        sum+=abs(a[i]);
    }
    SORT(v);
    if(count%2==0){cout<<sum;}
    else{
        cout<<sum-2*v[0];
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