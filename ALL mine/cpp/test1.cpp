//code by 
//(っ◔◡◔)っ ♥ RATNESH ♥

#include <bits/stdc++.h>
#define ll long long
#define f0(i, n) for (int i = 0; i < n; i++)
#define I cin >>
#define O cout <<
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// max(a,b)
// pow(A,b)
// int n = sizeof(arr) / sizeof(arr[0]);//
// sort(arr, arr + n);//
// cout << fixed << setprecision(2) << *result* << endl;//
//#include <boost/multiprecision/cpp_int.hpp> // for more precision//
// using namespace boost::multiprecision; //
using namespace std;


  
void solve()
{
    string arr[8];
    for (int i = 0; i < 8;i++)
        cin >> arr[i];
     int r = 0;
    int b = 0;
    int flag = 0;
    for (int i = 0; i < 8; i++){
        r = 0;
        for (int j = 0; j < 8; j++){
           if(arr[i][j]=='R')
           {
            r++;
           }
        }
         if(r==8)
         {
             cout << "R" << endl;
             flag = 1;
             break;
          }
       }
       if(!flag)
       {

       cout << "B";
       }

       // //if(!flag){
       //     for (int i = 0; i < 8;i++) {
       //         b = 0;
       //         for (int j= 0; j< 8;j++){

       //             if(arr[i][j]=='B')
       //                 b++;
       //         }
       //         if(b==8)
       //         {
       //             cout << "B" ;
       //             break;
       //         }
       //         //}
       //     }
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