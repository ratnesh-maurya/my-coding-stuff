/*
   Head-Recursion
code by @ratnesh maurya
     13/10/2022

*/
#include <stdio.h>
void fun(int n)
{
   if(n>0)
    {
        fun(n-1);
        printf("%d ",n);
    }
}
int main() 
{
    int x=3;
 fun(x);
    return 0;
}