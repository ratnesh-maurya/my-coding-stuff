/*
  maxmina
  code by @ratnesh maurya
  15/10/2022
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int check(int n)
{

}

 vector<int> prevPermOpt1(vector<int>& arr) {
        
         int temp=INT_MIN;
         int idx=-1;
        
         for(int i=arr.size()-2;i>=0;i--)
         {
            int num=arr[i];
             
            for(int j=i+1;j<arr.size();j++)
            {
                 int currnum = arr[j];
                
                 if(currnum!=num and currnum>temp and currnum<num)
                 {
                     temp = currnum;
                     idx = j;
                 }
            }
             if(idx!=-1)  //found something smaller
             {
                 int x = arr[i];
                 arr[i] = arr[idx];
                 arr[idx] = x;
                 
                 //first part
                 //0 to i
                 // sort(arr.begin()+(i+1),arr.end());
                 return arr;
             }
         }
         sort(arr.begin(),arr.end());
         return arr;
    }
//fghhh
 
 
int main()
{
   int n;
   cin>>n;
   int x;
   vector<int> arr;
   for(int i=0;i<n;i++)
   {
             cin >> x;
             arr.push_back(x);
   }
   prevPermOpt1(arr);

   return 0;
}