#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
const int INF = 1e9;

vector<pair<int, int>> adj[MAXN];
int dist[MAXN];

void dijkstra(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dist[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto& v : adj[u]) {
            int alt = dist[u] + v.second;
            if (alt < dist[v.first]) {
                dist[v.first] = alt;
                pq.push({alt, v.first});
            }
        }
    }
}

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int u = (i-1)*m + j;

            // add edges to adjacent cells
            if (i+1 <= n) {
                int v = i*m + j;
                adj[u].push_back({v, a});
                adj[v].push_back({u, a});
            }
            if (j+1 <= m) {
                int v = (i-1)*m + j + 1;
                adj[u].push_back({v, a});
                adj[v].push_back({u, a});
            }
            if (i+1 <= n && j+1 <= m) {
                int v = i*m + j + 1;
                adj[u].push_back({v, b});
                adj[v].push_back({u, b});
            }
            if (i+1 <= n && j-1 >= 1) {
                int v = i*m + j - 1;
                adj[u].push_back({v, b});
                adj[v].push_back({u, b});
            }
        }
    }

    // run Dijkstra's algorithm
    memset(dist, INF, sizeof(dist));
    dijkstra(1);

    // output the minimum cost to reach the last cell
    cout << dist[n*m] << endl;

    return 0;
}

