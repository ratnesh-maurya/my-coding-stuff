#User function Template for python3


    
    #Function to return max value that can be put in knapsack of capacity W.
class Solution:
    def helper(self, W, wt, val, dp, idx):
        if idx == len(wt): return 0
        if wt[idx] > W: return self.helper(W, wt, val, dp, idx + 1)
        if dp[idx][W] != -1: return dp[idx][W]
        
        dp[idx][W] = max(
            val[idx] + self.helper(W - wt[idx], wt, val, dp, idx + 1),
            self.helper(W, wt, val, dp, idx + 1)
        )
        
        return dp[idx][W]
        
    def knapSack(self,W, wt, val):
        return self.helper(W, wt, val, [[-1 for _ in range(W + 1)] for _ in range(len(wt))], 0)


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        # n = int(input())
        W = int(input())
        val = list(map(int, input().strip().split()))
        wt = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.knapSack(W, wt, val))

# } Driver Code Ends