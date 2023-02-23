#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
public:
    vector<int> parent;
    vector<int> size;

    DisjointSet(int n) {
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0);
        size.assign(n, 1);
    }

    int find(int i) {
        if (parent[i] != i) {
            parent[i] = find(parent[i]);
        }
        return parent[i];
    }

    void merge(int i, int j) {
        i = find(i);
        j = find(j);
        if (i != j) {
            if (size[i] < size[j]) {
                swap(i, j);
            }
            parent[j] = i;
            size[i] += size[j];
        }
    }
};

int main() {
    int c, n, k;
    cin >> c >> n;

    vector<int> candy(n);
    for (int i = 0; i < n; i++) {
        cin >> candy[i];
    }

    vector<int> money(n);
    for (int i = 0; i < n; i++) {
        cin >> money[i];
    }

    cin >> k;
    DisjointSet dsu(n);
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        dsu.merge(a-1, b-1);
    }

    vector<pair<int, int>> people(n);
    for (int i = 0; i < n; i++) {
        people[i] = make_pair(money[i], i);
    }
    sort(people.rbegin(), people.rend());

    int earnings = 0;
    for (auto& person : people) {
        int i = person.second;
        int root = dsu.find(i);
        if (dsu.size[root] >= candy[i]) {
            dsu.size[root] -= candy[i];
            earnings += candy[i] * person.first;
        }
    }

    cout << earnings << endl;

    return 0;
}




