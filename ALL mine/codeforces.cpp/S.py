import heapq

N, M, A, B = map(int, input().split())

grid = [[A, B][i+j&1] for i in range(N) for j in range(M)]
dist = [[float('inf')] * M for _ in range(N)]
dist[0][0] = 0

pq = [(0, 0, 0)]   # (distance, row, col)

while pq:
    d, r, c = heapq.heappop(pq)
    if (r, c) == (N-1, M-1):
        print("Minimum cost to reach the endpoint:", d)
        break
    for dr, dc, cost in [(1,0, A), (-1,0, A), (0,1, A), (0,-1, A), (1,1, B), (1,-1, B), (-1,1, B), (-1,-1, B)]:
        nr, nc = r + dr, c + dc
        if 0 <= nr < N and 0 <= nc < M and d+cost < dist[nr][nc]:
            dist[nr][nc] = d + cost
            heapq.heappush(pq, (dist[nr][nc], nr, nc))
else:
    print("No path found.")
 