// #include <stdio.h>
// int fibonacci(int a);

// int fibonacci(int a){
//     if(a == 0)
//         return 0;
//     else if(a == 1)
//         return 1;
//     else
//         return fibonacci(a-1) + fibonacci(a-2);
// }

// int main(){
//     int f,n;
//     int sum=0;
//     printf("Enter the no.");
//     scanf("%d",&n);

// for(int i = 0; i < n; i++){
//     printf("%d\n", fibonacci(i));
// } 
// return 0;

// }

// #include <stdio.h>
// int main() {
//     int i = 5;
//     float f = 3.5;
//     char c = 'A';

//     int *iptr = &i;
//     float *fptr = &f;
//     char *cptr = &c;

    
//     iptr++; fptr++; cptr++;

//     printf("After pointer arithmetic (addresses changed):\n");
//     printf("i pointer = %p, f pointer = %p, c pointer = %p\n", iptr, fptr, cptr);

//     return 0;
// }


// #include <stdio.h>

// void mv(int *iptr, float *fptr, char *cptr) {
//     *iptr += 10;       
//     *fptr *= 2.0;      
//     *cptr = *cptr + 1; 
// }

// void main() {
//     int i = 5;
//     float f = 3.5;
//     char c = 'A';

//     int *iptr = &i;
//     float *fptr = &f;
//     char *cptr = &c;

//     mv(iptr, fptr, cptr);

//     printf("Modified Values:\n");
//     printf("i = %d, f = %.2f, c = %c\n", *iptr, *fptr, *cptr);

   
// }

#include <stdio.h>
void main() {
    int i = 5;
    float f = 3.5;
    char c = 'A';

    int *iptr = &i;
    float *fptr = &f;
    char *cptr = &c;

    printf("Values using pointers:\n");
    printf("i = %d, f = %.2f, c = %c\n", *iptr, *fptr, *cptr);
    printf("Addresses stored in pointers:\n");
    printf("i = %p, f = %p, c = %p\n", iptr, fptr, cptr);

    
}