//All prime numbers under1 100
#include<stdio.h>
int main()
    {
        int n,i;
        printf("All pime numbners under 100 are:\n");
        for(n=1;n<=100;n++)
        {
             for(i=2;i<=n-1;i++)
        {
             if(n%i==0)
                break;
        }

        if(i==n)
          printf("%d ",n);

        }


        return 0;
    }
