// #include <stdio.h>
// int n;  // global variable
// void decreasing(int n){
//     if(n==0) return;
//     printf("%d\n",n);
//     decreasing(n-1);
//     return;
// }
// void main(){ 
    
//     printf("Enter the number");
//     scanf("%d",&n);
//      decreasing(n);

// }


#include <stdio.h>
int globalVar = 100;
void f1() {
    
    int localVar = 10;
    static int staticVar = 5;

    printf("%d\n",localVar);
    printf("%d\n",staticVar);
    printf("%d\n",globalVar);

    staticVar += 5;  
}

void main() {
    printf("%d\n", globalVar);

    
    f1();
    f1();
    f1();

    
    {
        int blockVar = 50;
        printf("%d\n",blockVar);
    }
    
    
}
