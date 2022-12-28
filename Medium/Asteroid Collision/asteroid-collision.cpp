//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int> s;
        vector<int>v;
       
        for(int i=0;i<N;i++)
        {
            if(asteroids[i]>0)
            {
                s.push(asteroids[i]);
            }
            else
            {
                  if(s.empty())
                  {
                      v.push_back(asteroids[i]);
                  }
                  else
                  {
                     while(!s.empty() and s.top()<-1*(asteroids[i]))
                      {
                       s.pop();
                      }
                     if(!s.empty() and s.top()==-1*(asteroids[i]))
                     {
                       s.pop();
                     }
                   else if(s.empty())
                    {
                      v.push_back(asteroids[i]);
                    }
            }
            
        }
        }
         
          vector<int> res;
        while(!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(), res.end());
        v.insert(v.end(),res.begin(),res.end());
        
      
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends