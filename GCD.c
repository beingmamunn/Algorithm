#include<stdio.h>
int gcd(int a, int b)
{
     if(b==0)
          return a;
     else gcd(b, a%b);
}
int main()
{
     int a, b;
     scanf("%d %d", &a, &b);
     printf("%d", gcd(a, b));
}
