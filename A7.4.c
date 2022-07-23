// HCF of two numbers
#include<stdio.h>
int main()
   {
      int x,y,h;
      printf("Enter two numbers\n");
      scanf("%d %d",&x,&y);
      for(h=x<y?x:y; h>=1;h--)
         if(x%h==0 && y%h==0)
            break;

            printf("HCF is %d",h);
         return 0;

   }
