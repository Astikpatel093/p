#include <stdio.h>
int* f(int* j){
     
    
    return j;
}
void main(){
    int k=10;
int* p=f(&k);
printf("%d\n", *p);
}