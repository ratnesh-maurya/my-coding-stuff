//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long a[], int n)
{
    long long area=0;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        area=max(area,(j-i)*min(a[i],a[j]));
        if(a[i]<a[j])
        {
            i++;
        }
        else
        {
            j--;
        }
        
    }
    return area;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends