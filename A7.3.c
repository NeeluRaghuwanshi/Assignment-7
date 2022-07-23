//to check whether a given number is there in the Fibonacci
//series or not

#include<stdio.h>
int main()
   {
      int n,i,x=0,y=1,f=1;
      printf("Enter N:\n");
      scanf("%d",&n);
       while(f<n)
          {
            x=y;
            y=f;
            f=x+y;
          }
        if(f==n || n==0)
          printf("%d is in fibonacci series ",n);
        else
          printf("%d is not in fibonacci series",n);

          return 0;
   }
