#include<stdio.h>
int sort(int arr[], int n)
{
    int i, j, temp;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

}

int binarySearch(int arr[], int search, int n)
{
    int mid, low=0, high=n-1;
    while (low <= high)
    {
        mid = low + (high- low)/2;
        if (arr[mid] == search)
            return mid;
        if (arr[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int i, n, search;
    scanf("%d", &n);

    int arr[n+5];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
    for(i=0; i<n; i++)
    {
         printf("%d ", arr[i]);
    }
    scanf("%d", &search);
    search=binarySearch(arr, search, n);
    if(search == -1 )
    {
        printf("Element not found in the array ");
    }
    else
    {
        printf("Element found at index : %d", search+1);
    }


}
