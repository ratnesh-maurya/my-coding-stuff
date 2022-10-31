//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
       stack<int> st;
       long long maxA = 0;
       for(int i = 0 ; i <= n ; i++){
           while(!st.empty() and (i == n or arr[st.top()] >= arr[i])){
               long long height = arr[st.top()];
               st.pop();
               long long width;
               if(st.empty()) width = i;
               else width = i - st.top() - 1;
               maxA = max(maxA , width*height);
           }
           st.push(i);
       }
       return maxA;
    }
        
        // Your code here
    
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends