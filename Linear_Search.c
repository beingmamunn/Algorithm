#include<stdio.h>
int linearSearch(int arr[], int n, int search)
{
     for(int i=0; i<n; i++)
     {
          if(arr[i]==search)
               return i;
     }
     return -1;

}

int main()
{
     int i, n, search, position;
     printf("Enter number of element: ");
     scanf("%d", &n);

     int arr[n+10];
     printf("Enter %d elements: ", n);

     for(i=0; i<n; i++)
     {
          scanf("%d", &arr[i]);
     }

     printf("Enter searching element: ");
     scanf("%d", &search);

     position=linearSearch(arr, n, search);

     if (position==-1)
          printf("%d is not found", search);
     else
          printf("%d found at position: %d", search, position+1);



}
