
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
     int a,b,c,d;
    cin>> a>>b>>c>>d;
    int chnage  = 4;
    bool ratnesh = false;
    while(chnage--){
     if(a<b && c<d && a<c && b<d){
             ratnesh= true;
             break;
                   }
         int  temporary = a;
         a=c;c=d;d=b;b=temporary;
          }
//cout<<
if(
    ratnesh
){

}
else
{

}
 if(ratnesh){
    cout<<"YES";
 }
 else{
    cout<< "NO";
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