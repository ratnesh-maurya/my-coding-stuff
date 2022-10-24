

#include <bits/stdc++.h>
#define ll long long
#define f0(i, n) for (int i = 0; i < n; i++)
#define I cin >>
#define O cout <<

using namespace std;


  
void solve()
{
    int A[3];
    for (int i = 0; i < 3;i++)
    {
        I A[i];
    }
    sort(A, A + 3);
    if (A[2] == A[0] + A[1]) {
            O "YES" ;
        }
        else 
        {
            O "NO" ;
        }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

        ll tc;
    I tc;
    while (tc--)
    {
        solve();
        O endl;
    }
    return 0;
}