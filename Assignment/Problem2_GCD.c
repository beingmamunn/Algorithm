#include <stdio.h>
int main()
{
    while(1)
    {
        int a, b, x, y;
        scanf("%d %d", &a, &b); //input 2 numbers

        if(a==0 && b>0)
        {
            printf("%d\n", b); //print gcd
        }
        else if(b==0 && a>0)
        {
            printf("%d\n", a); //print gcd
        }
        else
        {
            if(a>b)
            {
                x=a-b;
                y=a/b;
            }
            else if(b>a)
            {
                x=b-a;
                y=b/a;
            }
            while (y>0)
            {
                int z=x%y;
                x=y;
                y=z;
            }

            printf("%d\n", x); //print gcd
        }
    }
    return 0;
}
