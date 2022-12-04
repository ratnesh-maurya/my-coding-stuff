/*
  nested recursion
  code by @ratnesh maurya
  14/10/2022
*/

#include <stdio.h>
    int fun(int n)
    {
        if(n>100)
        return n-10;
        return fun(fun(n+11));
    }
int main()
    {
    int r;
    r=fun(65);
        printf("%d\n",r);
        return 0;
    }