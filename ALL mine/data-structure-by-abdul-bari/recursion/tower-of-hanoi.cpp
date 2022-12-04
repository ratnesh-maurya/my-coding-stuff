/*
 tower of hanoi
  code by @ratnesh maurya
  15/10/2022
*/
#include<stdio.h>

void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n - 1, A, C, B);
        printf("(%d,%d)\n", A, C);
        TOH(n - 1, B, A, C);
    }
}
    int main()
{
    TOH(10000, 1, 2, 3);
    return 0;
}