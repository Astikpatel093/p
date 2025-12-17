#include <stdio.h>
void decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
void main(){ 
    int n;
    printf("Enter the number");
    scanf("%d",&n);
     decreasing(n);

}