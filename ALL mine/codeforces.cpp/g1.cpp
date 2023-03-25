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
    
   int n,q;
    cin >> n>>q;
    int prefix[n];
    int sum=0;
    int sumbd = 0;
    int ram = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>prefix[i];
        sum+=prefix[i];
    }
    int  fix[n];
    fix[0]=prefix[0];
    for(int i=1;i<n;i++){
       fix[i]=prefix[i]+fix[i-1];
    }
   
    for(int i=0;i<q;i++){
        int left,right,r;
        cin>>left>>right>>r;
          int sum1=fix[right-1]-(fix[left-1]-fix[left-1]);
        int sum2=sum-sum1+(right-left+1)*r;
        if(sum2%2==1)  {cout<<"YES"<<endl;} else  {cout<<"NO"<<endl;}
    }
    int rm = 0;
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
        
    }
    return 0;
}
