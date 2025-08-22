#include <stdio.h>
int main() {
    int num1;
    int num2;
    int s;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    s= num1+num2;
    printf("Sum is: %d", s);
    return 0;
}