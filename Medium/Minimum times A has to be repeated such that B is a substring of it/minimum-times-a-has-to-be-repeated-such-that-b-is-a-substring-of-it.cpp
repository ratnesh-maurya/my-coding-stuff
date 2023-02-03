//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
      int n = A.size(), m = B.size();
        for(int i=0; i<n ; i++){
            if(A[i]==B[0]){
                int cnt = 0;
                int k = 0, j = i;
                if(j!=0) cnt++;
                while(k<m&&A[j]==B[k]){
                  if(j==0) cnt++;
                  j = (j+1) % n;
                  k++;
                }
                if(k==m)  return cnt;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends