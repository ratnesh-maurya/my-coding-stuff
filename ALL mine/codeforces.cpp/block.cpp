
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
    int n;
         I n; 
        vector<int> A(n);
        for(int i=0;i<n;++i)
        cin>>A[i];

        ll ans=A[0];
        SORT(A);
        

        for(int i=1;i<n;++i){
            if(ans<A[i]){
                ans += (A[i]-ans+1)/2;
            }
        }
        cout<<ans<<endl;
   
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