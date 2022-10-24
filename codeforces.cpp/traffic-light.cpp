#include<bits/stdc++.h>

using namespace std;


 
 
int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--)
    {
     int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    int ans = -1;
    
    vector<int> green;
    for (int x = 0; x < n; x++) {
        if (s[x] == 'g') {
            green.push_back(x);
        }
    }
    green.push_back(green[0] + n);
    for (int x = 0; x < n; x++) {
        if (s[x] == c) {
            int val = *lower_bound(green.begin(), green.end(), x);
            ans = max(ans, val - x);
        }
    }
    cout << ans << endl;
}
    return 0;
}