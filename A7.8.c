//Next prime number of a given number
#include<stdio.h>
int main()
    {
        int n,n1,i;
        printf("Enter a number:\n");
        scanf("%d",&n);
        for(i=+n;;i++)
        {
            for(n1=2;n1<i;n1++)

              {
                if(i%n1==0)
                break;
              }

        if(i==n1)
        break;
        }
        printf("Next prime number  is %d",n1);
        return 0;
    }
