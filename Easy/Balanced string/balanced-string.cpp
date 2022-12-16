//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    int sum_of_digits(int N){
        int add = 0;
        while(N>0){
            add += (N%10);
            N = N/10;
        }
        return add;
    }
    string BalancedString(int N) {
        // code here
        int k = N;
        string ans, temp;
        temp = "abcdefghijklmnopqrstuvwxyz";
        if(N==26){
            return temp;
        }
        else if(N>26){
            while(N>26){
                ans = ans+temp;
                N -= 26;
            }
        }
        if(N%2==0){
            string cpy = temp.substr((26-(N/2)), (N/2));
            ans += temp.substr(0, (N/2));
            ans += cpy;
        }
        else{
            if(sum_of_digits(k)%2==0){
                string cpy = temp.substr((26-((N-1)/2)), ((N-1)/2));
                ans += temp.substr(0, ((N+1)/2));
                ans += cpy;
            }
            else{
                string cpy = temp.substr((26-((N+1)/2)), ((N+1)/2));
                ans += temp.substr(0, ((N-1)/2));
                ans += cpy;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends