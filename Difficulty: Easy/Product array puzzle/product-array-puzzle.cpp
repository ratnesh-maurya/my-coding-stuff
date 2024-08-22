//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        vector<long long int> p(nums.size());
        long long int pr = 1;    // store value of product
        int check = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                check++;
                continue;
            }
            else pr *= nums[i];
        }
        
        for(int i=0; i<p.size(); i++){
            if(check == 0 ) p[i] = pr/nums[i];
            else if(check == 1 && nums[i] == 0) p[i] = pr;
            else p[i] = 0;
        }
        
        return p;
    
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends