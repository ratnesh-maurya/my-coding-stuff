//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
     int i = 0;
        while(i<n && str[i]=='1'){
            i++;
        }
        if(i==n){
            return {-1};
        }
        else{
            vector<pair<int,int>>A; int c = 0,j;
            while(i<n){
                j = i;
                while(i<n && str[i]=='0'){
                    c++;
                    i++;
                }
                A.push_back({c,j}); c = 0;
                j = i;
                while(i<n && str[i]=='1'){
                    c++;
                    i++;
                }
                A.push_back({-c,j}); c = 0;
            }
            if(A.back().first==0){
                A.pop_back();
            }
            int score = 0,maxscore = 0,curlen = 0,lenmax = 0,idx = 0,idxu = 0;
            bool upd = false;
            for(int k = 0; k<A.size(); k++){
                score+=A[k].first;
                curlen+=abs(A[k].first);
                if(score>maxscore){
                    maxscore = score;
                    if(!upd){
                        idx = idxu;
                        upd = true;
                    }
                    lenmax = curlen;
                }
                if(score<0){
                    curlen = 0;
                    score = 0;
                    upd = false;
                    idxu = k+1;
                }
            }
            return {A[idx].second+1,A[idx].second+lenmax};
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends