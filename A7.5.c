// Write a program to check whether two given numbers are co-prime
//numbers or not
#include<stdio.h>
int main()
   {
      int x,y,h;
      printf("Enter two numbers\n");
      scanf("%d %d",&x,&y);
      for(h=x<y?x:y; h>=1;h--)
         if(x%h==0 && y%h==0)
            break;
         if (h==1)
            printf("%d and %d are co prime numbers",x,y);
         else
         printf("%d and %d are not coprime numbers",x,y);
         return 0;

   }
