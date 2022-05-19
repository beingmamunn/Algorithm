#include<stdio.h>
typedef struct
{
    int weight, price;
} item;

int max(int a, int b)
{
    if(a>b)
        return a;
    else  return b;
}
void zeroOneKnapsack(item x[], int n, int capacity)
{
    int mat[n+1][capacity+1], i, j, profit;

    for (i=0; i<=n; i++)
    {
        mat[i][0]=0;
    }
    for (j=0; j<=capacity; j++)
    {
        mat[0][j]=0;
    }
    for (i=1; i<=n; i++)
    {
        for(j=1; j<=capacity; j++)
        {
            if(x[i].weight>j)
                mat[i][j]= mat[i-1][j];
            else
                mat[i][j]= max(mat[i-1][j], (mat[i-1][j-(x[i].weight)]+(x[i].price)));
        }
    }
    profit=mat[n][capacity];
    printf("Maximum profit is: %d\n", profit);

    int temp=profit, tempC=capacity;

    printf("Selected items are: ");

    for(i=n; i>0 && temp>0; i--)
    {
        if(temp==mat[i-1][tempC])
        {
            continue;
        }
        else
        {
            printf("%d ", i);
            temp=temp-x[i-1].price;
            tempC=tempC-x[i-1].weight;

        }
    }

}

int main()
{
    int i, j, n, capacity;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    item x[n];
    for(i=0; i<n; i++)
    {
        printf("Enter weight and Price: ");
        scanf("%d", &x[i].weight);
        scanf("%d", &x[i].price);

    }
    printf("Enter the capacity: ");
    scanf("%d", &capacity);

    zeroOneKnapsack(x, n, capacity);

    return 0;
}
