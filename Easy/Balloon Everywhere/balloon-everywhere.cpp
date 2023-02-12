//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
     vector<int> v(26,0);
        for(int i=0;i<s.length();i++){
            int charIndex = s[i];
            v[charIndex-97]++; 
        }
        //now we count of each letters
        int bCount = v[1];
        int aCount = v[0];
        int nCount = v[13]; 
        int lCount = v[11];
        int oCount = v[14];
        
        //first need to find the mini.
        int minCountBAN = min(bCount,aCount);
        minCountBAN = min(nCount, minCountBAN);
        int minCountLO = min(lCount,oCount);
        minCountLO = minCountLO/2;
        
        
        return min(minCountLO,minCountBAN);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends