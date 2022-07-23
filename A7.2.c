// print N  terms of fibonacci series
#include<stdio.h>
int main()
   {
      int n,i,x=-1,y=1,f;
      printf("Enter a number\n");
      scanf("%d",&n);
       for(i=1;i<=n;i++)
          {
            f=x+y;
            printf("%d ",f);
            x=y;
            y=f;

          }
          return 0;
   }
