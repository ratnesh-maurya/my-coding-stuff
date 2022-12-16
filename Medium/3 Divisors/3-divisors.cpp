//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
bool prime(int x){
        for(int i=2;i*i<=x;i++) if(x%i==0) return false;
        return true;
    }
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int> v;
        for(int i=0;i<q;i++){
            int num=query[i];
            int prev=0;
            for(int j=2;j<=num;j++){
                int x=sqrt(j);
                if(x*x==j&&prime(x)) prev++;
            }
            v.push_back(prev);
        }
        return v;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends