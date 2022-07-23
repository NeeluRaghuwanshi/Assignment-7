//check whether a given number is an Armstrong number
//or not
#include<stdio.h>
int main()
  {
      int n,rem,sum=0,x;
      printf("Enter a number:\n");
      scanf("%d",&n);
      x=n;
      while(x!=0)
               {
                 rem=x%10;
                 sum=sum+rem*rem*rem;
                 x=x/10;
               }
               if(sum == n)
               printf("%d is an Armstrong number",n);
               else
               printf("%d is not an armstrong numner ",n);

          return 0;
  }
