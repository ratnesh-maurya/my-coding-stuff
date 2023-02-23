/*
  file-name 
  code by @ratnesh maurya
  date
*/
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int v = 0;
    int r;
    int num = 9862;
    while(num>0)
    {
        r = num % 10;
        if(v>r)
        {
            v = r;
        }
        num = num / 10;
    }
    cout << v;

    return 0;
}