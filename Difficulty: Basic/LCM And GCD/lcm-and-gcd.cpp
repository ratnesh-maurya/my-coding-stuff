//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long gcd = 1, lcm = 1, a = A, b = B;
        
        while(a && b){
            if(a > b)
                a = a % b;
            else
                b =  b % a;
        }
        if(a == 0) gcd = b;
        else gcd = a;
        
        lcm = (A*B)/gcd;
        return {lcm, gcd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends