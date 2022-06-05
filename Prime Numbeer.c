#include<stdio.h>
#include<math.h>
int main()
{
     int n, i, count=0;
     scanf("%d", &n);
     for(i=2; i<sqrt(n); i++)
     {
          if(n%i==0)
               count++;
     }
     if(count>0)
     {
          printf("Not Prime.");
     }
     else printf("Prime.");
}
