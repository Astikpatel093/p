#include <stdio.h>
#include <limits.h>
void main()
{
    int n, i;
    int max = INT_MIN;
    int smax = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);

        if (arr[i] > max)
            smax = max;
        max = arr[i];
    }
        printf("%d", smax);
    
}