//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
   int lenOfLongSubarr(int A[], int n, int K) 
{ 
    unordered_map<int, int> prefixSumMap; // To store the prefix sum and its first occurrence index
    int sum = 0;  // To store the running sum
    int res = 0;  // To store the length of the longest subarray

    for (int i = 0; i < n; i++) 
    {
        // Add the current element to the sum
        sum += A[i];

        // If the sum is equal to K, we have found a subarray from the beginning
        if (sum == K) 
        {
            res = i + 1;  // Update result since the subarray is from index 0 to i
        }

        // Check if there is a subarray sum that matches `sum - K`
        if (prefixSumMap.find(sum - K) != prefixSumMap.end()) 
        {
            // Update result with the max length
            res = max(res, i - prefixSumMap[sum - K]);
        }

        // Store the first occurrence of the current prefix sum
        if (prefixSumMap.find(sum) == prefixSumMap.end()) 
        {
            prefixSumMap[sum] = i;
        }
    }

    return res;
}

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends