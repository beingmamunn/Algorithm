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

int main()
{
    int i, j, n, capacity;
    scanf("%d", &n); //input number of items

    item x[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x[i].weight); //input weight
        scanf("%d", &x[i].price); //input price

    }
    scanf("%d", &capacity); //input capacity

    int mat[n+1][capacity+1];

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
    printf("%d\n", mat[n][capacity]); //print maximum profit

    return 0;
}
