//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    int i = 0;
    stack<char> st;
    int n = num.length();
    while(i<n){
        if(st.empty()){
            if(num[i]!='0') st.push(num[i]);
        }else{
            if(k){
                if(num[i]<st.top()){
                   while(!st.empty() && st.top()>num[i] && k){
                       st.pop();
                       k--;
                   } 
                   if(num[i] != '0' || (k==0 && !st.empty())){
                       st.push(num[i]);
                   }
                }else{
                    st.push(num[i]);
                }
            }else{
                st.push(num[i]);
            }
        }
        i++;
    }
    string ans = "";
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    while(k--){
        if(ans.length()==0) break;
        ans.pop_back();
    }
    if(ans.length()==0) ans = "0";
    return ans;
}