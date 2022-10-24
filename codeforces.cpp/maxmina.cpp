/*
  maxmina
  code by @ratnesh maurya
  15/10/2022
*/
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int A[n];
        int count = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> A[i];
            if(A[i]==1)
            {
                count++;
                
            }
        }
        if(n>k && count>0)
        {
            cout << "YES" << endl;
        }
        else if(count==0)
        {
            cout << "NO" << endl;
        }
        else if(n<=k && count>0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}