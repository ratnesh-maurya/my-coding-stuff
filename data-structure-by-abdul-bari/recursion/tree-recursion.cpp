/*
  tree-recursion 
  code by @ratnesh maurya
  14/10/2022
*/
#include <stdio.h>
    void fun(int n) {
        if(n>0)
    {
        printf("%d ",n);
        fun(n-1);
        fun(n-1);
    }
    }

int main() {
    fun(3);
    return 0;
}