#include<stdio.h>
int main()
{
     int n, i, j, sum=0;
     printf("Enter a Number: ");
     scanf("%d", &n);

     printf("Prime Numbers: ");
     for(i=2; i<=n; i++)
     {
          int count=0;
          for(j=1; j<=i; j++)
          {
               if(i%j==0)
               {
                    count++;
               }
          }
          if(count<3)
          {
               printf(" %d", i);
               sum=sum+i;
          }
     }
     printf("\nCumulative sum is: %d\n", sum);

     return 0;
}
