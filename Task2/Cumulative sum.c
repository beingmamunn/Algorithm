#include<stdio.h>
int main()
{
     int i, n;
     printf("Enter number of element: ");
     scanf("%d", &n);
     int array[n+5];
     printf("Enter %d numbers: ", n);
     for(i=0; i<n; i++)
     {
          scanf("%d", &array[i]);
     }
     printf("Cumulative sum of the array is:");
     for(i=0; i<n; i++)
     {
          array[i]+=array[i-1];
          printf(" %d", array[i]);
     }

}
