#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("dena.txt", "r", stdin);
    freopen("le_ye_le.txt", "w", stdout);
#endif
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    long long a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a, a + n);

    if (a[0] == a[n - 1]) {
      cout << "NO" << endl;
      continue;
    }

    long long x = a[n - 1] + 1;
    while (true) {
      bool valid = true;
      for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
          if (__gcd(a[i] + x, a[j] + x) != 1) {
            valid = false;
            break;
          }
        }
        if (!valid) {
          break;
        }
      }
      if (valid) {
        cout << "YES" << endl;
        break;
      }
      x++;
    }
  }

  return 0;
}
