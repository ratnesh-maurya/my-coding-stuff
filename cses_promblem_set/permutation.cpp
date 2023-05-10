#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, n) for (int i = 0; i < n; i++)
#define I cin >>
#define O cout <<

#define SORT(v) sort((v).begin(), (v).end())
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
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast int n;
    cin >> n;

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> A(n, 0);
    int i = 0;

    for (int j = 2; j <= n; j += 2)
    {
        A[i] = j;
        i++;
    }

    for (int j = 1; j <= n; j += 2)
    {
        A[i] = j;
        i++;
    }

    for (int j = 0; j < n; j++)
    {
        cout << A[j] << " ";
    }
    cout << endl;

    return 0;
}