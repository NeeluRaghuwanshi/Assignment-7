//All prime numbers between two prime numbers
#include<stdio.h>
int main()
    {
        int n,n1,n2,i;
        printf("Enter two numbers:\n");
        scanf("%d %d",&n1,&n2);
        printf("All prime numbers between %d and %d are:\n",n1,n2);
        for(n=n1;n<n2;n++)
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
