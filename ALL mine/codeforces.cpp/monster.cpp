
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
    ll n,k;
    cin>>n>>k;
    ll h[n],p[n];
    FOR(i,n)
    {
        I h[i];
        }
    FOR(i,n)
    {
        I p[i];
        }
    sort(h,h+n);
    sort(p,p+n);
    ll x=h[n-1];
    int  flag=0;
    int i=0;
    while(k>0 && i<n)
    {
      x=x-k;
      k=k-p[i];
      if(x<=0)
      {
        flag=1;break;
      }
      i++;
    }
    if(flag)
    O "YES";
    else 
    O "NO";
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