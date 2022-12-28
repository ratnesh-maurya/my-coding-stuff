
//(????)? ? RATNESH ?

#include <bits/stdc++.h>
#define int long long int
#define f(i, n) for (int i = 0; i < n; i++)
#define I cin >>
#define O cout <<
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;
 
void solve()
{
   int n;
   int count=0;
   I n;
   int A[n];
  for (int i = 0; i < n; i++)
   {
       I A[i];
   }
      for (int i = 0; i <= n; i++)
      {
          if(A[i]==A[i+1])
          {
              count++;
              if(count==1)
              {
                 
              break;
              
              }
          }
      }
      if(count==1)
              {
                cout<<"YES"<<endl; 
              }
              else
              {
                  cout<<"NO"<<endl;
              }

//code here

}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("dena.txt", "r", stdin);
    freopen("le_ye_le.txt", "w", stdout);
#endif
    fast
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        solve();
        O endl;
    }
    return 0;
}