#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

#define MAX 1000

int main()
{
   clock_t ini1, end1;
   clock_t ini2, end2;
   
   double A[MAX][MAX], x[MAX], y[MAX];
   
   for(int i=0;i<MAX;i++)
   {
        for(int j=0;j<MAX;j++)
            A[i][j]=1.0;
   }
   
   for(int i=0;i<MAX;i++)
        x[i]=1.0;
   
   for(int i=0;i<MAX;i++)
        y[i]=0.0;
   
   ini1=clock();
   for(int i=0;i<MAX;i++)
   {
        for(int j=0;j<MAX;j++)
            y[i]+=A[i][j]*x[j];
   }
   end1=clock();
   
   for(int i=0;i<MAX;i++)
        y[i]=0.0;
   
   ini2=clock();
   for(int j=0;j<MAX;j++)
   {
        for(int i=0;i<MAX;i++)
            y[i]+=A[i][j]*x[j];
   }
   end2=clock();
   
   cout<<"bucle1: "<<(double)(end1-ini1)/CLOCKS_PER_SEC*1000.0<<endl;
   cout<<"bucle2: "<<(double)(end2-ini2)/CLOCKS_PER_SEC*1000.0<<endl;
   
   return 0;
}

