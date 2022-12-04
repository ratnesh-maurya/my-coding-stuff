/*
  power-set-of-string
  code by @ratnesh maurya
  16/10/2022
*/
#include<bits/stdc++.h>
using namespace std;
 
 void powerset(string s,int i,string res)
 {
    if(i==s.length())
    {
        cout << "["<< res<<"]";
        return;
    }
    powerset(s, i + 1, res + s[i]);
    powerset(s, i + 1, res);
 }
int main()
{
    string s;
    cin >> s;
    int i = 0;
    string result;
    powerset(s, i, result);

    return 0;
}