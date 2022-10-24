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
    int n;
    I n;
    int A[n];
    for (int i = 0; i < n;i++)
    {
        I A[i];
    }

    int i = 0, j = n - 1;
    int count = 0;
    while(i<j)
    {
        while(i<n && A[i]==0)
            i++;
            while(j>=0 && A[j]==1)
                j--;
                if(i<j)
                    count++;

                i++;
                j--;
    }
    cout << count;
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