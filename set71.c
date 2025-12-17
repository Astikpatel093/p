#include <stdio.h>
typedef struct c
{
    int real;
    int imaginary;
} complex;
void display(complex c)
{

    printf("the  real and imaginary %d + i%d\n", c.real, c.imaginary);
    printf("the  real and imaginary %d - i%d\n", c.real, c.imaginary);
    
}
void main()
{
    complex arr[5];
    for (int i = 0; i < 1; i++)
    {
        printf("Enter the value of real no.\n");
        scanf("%d", &arr[i].real);
        printf("Enter the value of imaginary no.\n");
        scanf("%d", &arr[i].imaginary);
        display(arr[i]);
       

    }
    
}