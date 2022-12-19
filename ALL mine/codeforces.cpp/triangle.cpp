
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
    int x1, y1, x2, y2, x3, y3;
    I x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    set<int> x;
    set<int> y;
    x.insert(x1);
    x.insert(x2);
    x.insert(x3);
     y.insert(y1);
    y.insert(y2);
    y.insert(y3);
 if(x.size()<=2 && y.size()<=2)
 {
     O "NO";
 }
 else
    {
        O "YES";
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