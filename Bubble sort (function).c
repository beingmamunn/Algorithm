#include<stdio.h>
int bubbleSort(int array[], int n)
{
     int i, j, temp;
     for(i=0; i<n; i++)
     {
          for(j=0; j<n-i-1; j++)
          {
               if(array[j]>array[j+1])
               {
                   temp=array[j];
                   array[j]=array[j+1];
                   array[j+1]=temp;
               }
          }
     }
     return array[i];
}

int main()
{
     int i, n;
     printf("Number of element: ");
     scanf("%d", &n);

     printf("Enter %d numbers: ", n);
     int array[n+5];

     for(i=0; i<n; i++)
     {
          scanf("%d", &array[i]);
     }
     bubbleSort(array, n);

     printf("Sorted array is:");
     for(i=0; i<n; i++)
     {
          printf(" %d", array[i]);
     }

     return 0;

}
