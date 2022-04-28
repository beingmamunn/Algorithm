#include<stdio.h>
int insertion_sort(int arr[], int n)
{
     int i, j, item;
     for(i=1; i<n; i++)
     {
          item=arr[i];
          j=i-1;
          while(j>=0 && arr[j]>item)
          {
               arr[j+1]=arr[j];
               j=j-1;
          }
          arr[j+1]=item;
     }
}

int main()
{
     int i, j, n;
     scanf("%d", &n);
     int arr[n+5];
     for (i=0; i<n; i++)
     {
          scanf("%d", &arr[i]);
     }
     insertion_sort(arr, n);
     for (i=0; i<n; i++)
     {
          printf("%d ", arr[i]);
     }
}
