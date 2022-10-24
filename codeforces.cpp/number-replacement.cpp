#include<bits/stdc++.h>

using namespace std;


 
 
int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    string s;
	    for(int i =0; i<n; i++){
	        cin>>arr[i];
	    }
	    cin>>s;
	    
	    map<int,char> mp;
	    
	    for(int i =0 ; i<n; i++)
        {
	        if(mp.find(arr[i]) == mp.end()){
	            mp[arr[i]] = s[i];
	        }
	    }
	    
	    string temp ="";
	    
	    for(int i=0; i<n; i++){
	        temp += mp[arr[i]];
	    }
	    
	    if(s == temp){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	    
	    cout<<endl;
	}
	return 0;
}