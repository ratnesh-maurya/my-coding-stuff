//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
         int op1 = 0, op2 = 0;
        int a = A, b = B, c = C, d = D;
        while(a > c or b > d){
            if(a > c) op1++, a /= 2;
            if(b > d) op1++, b /= 2;
        }
        a = A, b = B, c = C, d = D;
        while(a > d or b > c){
            if(a > d) op2++, a /= 2;
            if(b > c) op2++, b /= 2;
        }
        return min(op1,op2);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends