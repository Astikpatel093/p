#include <stdio.h>

int arm(int k)
{
    int digit;
    int sum = 0;
    while(k>0)
    {
        digit = k % 10;
        sum = sum + digit * digit * digit;
        k = k / 10;
    }

    return sum;
}
void main()
{
int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int result = arm(n);
    if (n == result)
        printf("The no. is Armstrong");

    else
        printf("The no is not Armstrong");
}