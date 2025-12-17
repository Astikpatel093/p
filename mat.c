#include <stdio.h>
void main()
{
    int m, n;
    printf("Enter the  row of 1st matrix\n");
    scanf("%d", &m);
    printf("Enter the column of 1st matrix\n");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int p, q;
    printf("Enter the  row of 2st matrix\n");
    scanf("%d", &p);
    printf("Enter the column of 2st matrix\n");
    scanf("%d", &q);
    int arr1[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    if (n == p)
    {
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += arr[i][k] * arr1[k][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("wrong matrix");
    }
}

