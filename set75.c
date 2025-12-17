#include <stdio.h>

void main(){
    int a = 10;
    float b = 5.25;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("%d\n", a);
    printf("%.2f\n", b);
    printf("%c\n", c);

    printf("%p\n", p1);
    printf("%p\n", p2);
    printf("%p\n", p3);

   
    
   
}
