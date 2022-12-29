#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solution()
{
        int number;
        cin>>number;
        string w;
        cin>>w;
        string b=a;
        reverse(w.begin(),w.end());
        vector<vector<int>>m(number+1,vector<int>(number+1,0));
        for(int j=1;j<=number;j++)
        {
            for(int i=1;i<=number;i++)
            {
            if(b[j-1]==a[i-1])
            m[j][i]=1+m[j-1][i-1];
            else
            m[j][i]=max(m[j-1][i],m[j][i-1]);
            }
        }
    int s=m[number][number]/2;
    cout<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
 return 0;
}