#include<stdio.h>
int main()
{
    int n, i, smallest, largest;
    printf("Number of element: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    int array[n+5];
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    largest=array[0];
    smallest=array[0];

    for (i=1; i<n; i++)
    {
        if (largest<array[i])
            largest=array[i];
    }
    printf("Largest number is: %d\n", largest);

    for (i=1; i<n; i++)
    {
        if (array[i]<smallest)
            smallest=array[i];
    }
    printf("Smallest number is: %d", smallest);

}
