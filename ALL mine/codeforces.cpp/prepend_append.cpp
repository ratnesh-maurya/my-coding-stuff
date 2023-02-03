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
    int x=-1;
    string s;
    I s;
    FOR(i,n/2){
        if(s[i]==s[n-1-i])
        {
            x=i;
            break;
            }
    }
    if(x==-1){
        if(n%2==1){cout<<1;}
        else{cout<<0;}
        return;
    }
    cout<<n-2*x;

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