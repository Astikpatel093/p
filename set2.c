// #include <stdio.h>
// int su(int a, int b)
// {
//     int s = 0;
//     int a1 = a * a;
//     int b1 = b * b;
//     s = a1 + b1;
//     return s;
// }
// void main()
// {
//     int a, b;
//     printf("enter the no1\n");
//     scanf("%d", &a);
//     printf("enter the no2\n");
//     scanf("%d", &b);
//     int k = su(a, b);
//     printf("%d", k);
// }

#include <stdio.h>
int sum_sq(int x, int y)
{
    if (x > y)
    {
        return 0;
    }
    else
        return (x * x) + sum_sq(x + 1, y);
}
void main()
{
    int x, y;
    printf("Enter the 1st no\n");
    scanf("%d", &x);
    printf("Enter the 2st no\n");
    scanf("%d", &y);
    int result = sum_sq(x, y);
    printf("%d", result);
}