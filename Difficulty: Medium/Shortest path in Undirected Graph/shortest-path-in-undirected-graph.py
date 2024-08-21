#User function Template for python3

from collections import defaultdict, deque

class Solution:
    def shortestPath(self, edges, N, M, src):
        adj = defaultdict(list)
        
        for i in range(M):
            u = edges[i][0]
            v = edges[i][1]
            adj[u].append(v)
            adj[v].append(u)
        
        ans = [-1] * N
        ans[src] = 0
        q = deque([src])
        
        while q:
            temp = q.popleft()
            for i in adj[temp]:
                if ans[i] == -1:
                    ans[i] = ans[temp] + 1
                    q.append(i)
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, m = map(int, input().strip().split())
        edges=[]
        for i in range(m):
            li=list(map(int,input().split()))
            edges.append(li)
        src=int(input())
        ob = Solution()
        ans = ob.shortestPath(edges,n,m,src)
        for i in ans:
            print(i,end=" ")
        print()
        tc -= 1
# } Driver Code Ends