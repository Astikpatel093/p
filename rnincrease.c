#include <stdio.h>
void increasing(int x , int n){
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}
void main(){ 
    int n;
    printf("Enter the number");
    scanf("%d",&n);
     increasing(1,n);
}


// #include <stdio.h>
// void increasing(int n){
//     if(n==0) return;
//     increasing(n-1);
//      printf("%d\n",n);
//     return;
// }
// void main(){ 
//     int n;
//     printf("Enter the number");
//     scanf("%d",&n);
//      increasing(n);
// }