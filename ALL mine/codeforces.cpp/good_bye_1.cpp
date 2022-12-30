
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
    ll n, m;
    I n, m;
   ll A[n];
    ll B[m];
    FOR(i,n)
    {
        I A[i];

    }
       FOR(i,m)
    {
        I B[i];
        
    }
    sort(B, B + m);
    FOR(i,n)
    {
        if(A[i]<B[m-i-1])
        {
            A[i] = B[m-i-1];
        }

    }
    int sum = 0;
    
    FOR(i,n)
    {
        sum = sum + A[i];
    }
    O sum;
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