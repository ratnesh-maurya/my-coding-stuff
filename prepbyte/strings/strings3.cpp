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
   string s;
   I s;
   int n=s.size();
   int store=-1;
   int ans=0;
   for(int i=0;i<n;i++)
   {
     if(s[i]=='a' &&s[i+1]=='m' && s[i+2]=='a' &&s[i+3]=='n') 
     {
       
       ans=ans +  (n-4-i+1)+ (i-store-1)*(n-i-3);
       store=i;
     }
   }
   O ans;
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