#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
         
       int l[N], r[N];
       int temp=A[0];
       l[0]=A[0];
       int count=0;
       for(int i=1; i<N; i++)
       {
           if(temp<A[i])
           {
               temp=A[i];
               l[i]=temp;
           }
           else
           {
               l[i]=temp;
           }
       }
       r[N-1]=A[N-1];
       int temp1=A[N-1];
       for(int i=N-2; i>=0; i--)
       {
           if(temp1>A[i])
           {
               temp1=A[i];
               r[i]=temp1;
           }
           else
           {
               r[i]=temp1;
           }
       }
       for(int i=0; i<N-1; i++)
       {
           if((l[i]+r[i+1])>=K)
           {
               count++;
           }
       }
     return count;  
    }
};
// Driver code
