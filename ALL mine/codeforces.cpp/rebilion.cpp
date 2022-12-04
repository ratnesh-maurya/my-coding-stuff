#include <bits/stdc++.h>
#define ll long long
#define f0(i, n) for (int i = 0; i < n; i++)
#define I cin >>
#define O cout <<
#define fast

    
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
     ll n;
        cin >> n;
        string s;
        ll count = 1;
        ll counti=0;
        ll count0=0;
        ll count1=0;
        cin >> s;
        for (ll i = 0; i < n;i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
            else
            {
                counti = max(counti, count);
                count = 1;
            }
        }
        counti = max(counti, count);
        for (ll i = 0; i < n;i++)
        {
            if(s[i]=='0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        //cout << counti <<" " << count0 << " " << count1 << endl;
        cout << max((counti * counti), (count0 * count1)) << endl;

       
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
        ll tc;
    I tc;
    while (tc--)
    {
        solve();
        
    }
    return 0;
}