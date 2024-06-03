class Solution:
    def numberOfConsecutiveOnes (ob,n):
        # code here 
        a, b = 1, 1
        
        for _ in range(n):
            a, b = b, (a+b) % 1000000007
            
        return (pow(2, n, 1000000007) - b) % 1000000007


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):

        N = int(input())

        ob = Solution()
        print(ob.numberOfConsecutiveOnes(N))

# } Driver Code Ends