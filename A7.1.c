// print Nth  term of fibonacci series
#include<stdio.h>
int main()
   {
      int n,i,x=-1,y=1,f;
      printf("Enter N:\n");
      scanf("%d",&n);
       for(i=1;i<=n;i++)
          {
            f=x+y;
            x=y;
            y=f;

          }
          printf("%dth term of fibonacci series is %d",n,f);

          return 0;
   }
