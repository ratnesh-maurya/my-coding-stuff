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
  
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast
    ll n;
    I n;
    O n << " ";
    while (n != 1)
    {
    if (n % 2 == 0)
    {
        n = n / 2;
        O n << " ";
    }
    else{
        n = (n * 3) + 1;
        O n<< " ";
    }
       
    }
        return 0;
}