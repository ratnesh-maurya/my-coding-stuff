//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
                                                                           int upper[26]={0},lower[26]={0};
        for(auto &ch:str)
            ch > 'Z' ? lower[ch-'a']++:upper[ch-'A']++;

        int i = 0;int j = 0;
        
        for(auto &ch:str)
            if(ch>'Z'){
                while(lower[i]==0) i++;
                ch = 'a'+i;
                lower[i]--;
            }
            else{
                while(upper[j]==0) j++;
                ch='A'+j;
                upper[j]--;
            }
        return str;
    } // your code here
    
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends