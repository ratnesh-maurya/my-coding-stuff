#include <bits/stdc++.h>
typedef long long ll;

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
    int N;
    cin >> N;
    string s;
    I s;
int flag = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N;j++)
        {
            if ((s[j] == s[i])&&(j-i+1)%2==0)
            {
               
                     flag = 1;
            }
        }
        if(flag ==1)
        {
            break;
        }
    }
    if(flag ==1)
    {
        O "NO" << next;
    }
    else
    {
        O "YES" << next;
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