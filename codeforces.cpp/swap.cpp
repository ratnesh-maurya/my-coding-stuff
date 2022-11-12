/*
  maxmina
  code by @ratnesh maurya
  15/10/2022
*/
#include<bits/stdc++.h>
#define int long long
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
        int n;
        cin >> n;
        string s;
        int count = 1;
        int counti=0;
        int count0=0;
        int count1=0;
        cin >> s;
        for (int i = 0; i < n;i++)
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
        for (int i = 0; i < n;i++)
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


    return 0;
}