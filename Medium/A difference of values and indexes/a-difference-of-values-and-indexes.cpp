//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
         vector<int>v1,v2;

        for(int i=0;i<n;i++)

        {

            v1.push_back(arr[i]-i);

            v2.push_back(arr[i]+i);

        }

        int ans1=(*max_element(v1.begin(),v1.end()))-(*min_element(v1.begin(),v1.end()));

        int ans2=(*max_element(v2.begin(),v2.end()))-(*min_element(v2.begin(),v2.end()));

        return max(ans1,ans2);

    } 
     
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends