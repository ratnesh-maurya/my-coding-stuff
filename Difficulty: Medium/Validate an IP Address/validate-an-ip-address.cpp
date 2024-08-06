//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        int count = 0;
        int val = -1;
        for(int i=0;i<str.length();i++){
            if(str[i] != '.'){
                if(val == -1 && str[i]-'0' == 0 && (i+1) != str.length() && str[i+1] != '.'){
                    return false;
                } 
                else if(val == -1){
                    count++;
                    val = 0;
                }
                val = (val*10) + (str[i]-'0');
                
            }
            else{
                if(!(val >= 0 && val <= 255)){
                    return false;
                }
                val = -1;
            }
        }
        if(!(val >= 0 && val <= 255)){
            return false;
        }
        if(count == 4) return true;
        return false;


    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends