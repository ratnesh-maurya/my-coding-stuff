#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n), c(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < n; i++)
            cin >> b[i];

        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
            v.push_back({a[i], i});

        sort(v.begin(), v.end());
        sort(v.begin(), v.end());

        for (ll i = 0; i < n; i++)
            c[v[i].second] = b[i];

        for (ll i = 0; i < n; i++)
            cout << c[i] << " ";

        cout << "\n";
    }

    return 0;
}
