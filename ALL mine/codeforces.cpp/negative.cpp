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
  int N, c;
  I N>> c;
  int arr[c];

  vi v;
  for (int i = 0; i < N; i++) 
  {
    cin >>v[i];
  }
  for (int i = 0; i < N; i++)
  {
    v[i] += i + 1;
  }

  SORT(v);
  int i;
  for (i = 0; i < N; i++)
  {
      if (c >=v[i])
          c -=v[i];
      else
          break;
    }
cout << i << endl;

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