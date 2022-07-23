//Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
  {
      int n,rem,sum,x;
      printf("Armstrong number under 1000 are:\n");
      for(n=1;n<=1000;n++)
            {
             x=n;
             sum=0;
             while(x!=0)
               {
                 rem=x%10;
                 sum=sum+rem*rem*rem;
                 x=x/10;
               }
               if(sum == n)
               printf("%d\n",n);
            }
          return 0;
  }
