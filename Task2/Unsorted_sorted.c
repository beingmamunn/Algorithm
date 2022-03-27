#include<stdio.h>
int main()
{
     int n, i, j, temp;
     printf("Number of element: ");
     scanf("%d", &n);
     int array[n+5];
     printf("Enter %d numbers: ", n);
     for(i=0; i<n; i++)
     {
          scanf("%d", &array[i]);
     }
     int unsorted[n+5];
     for(i=0; i<n; i++)
     {
          unsorted[i]=array[i];
     }
     for(i=0; i<n; i++)
     {
          for(j=0; j<n-i-1; j++)
          {
               if (array[j]>array[j+1])
               {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
               }
          }
     }
     printf("Unsorted array was: ");
     for(i=0; i<n; i++)
     {
          printf(" %d", unsorted[i]);
     }
     printf("\n");

     printf("Sorted array is:");
     for(i=0; i<n; i++)
     {
          printf(" %d", array[i]);
     }


}
