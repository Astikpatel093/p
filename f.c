#include <stdio.h>
#include <math.h>
int power(int x,int y){
    return pow(x,y);
}
void main(){
    int a=3;
    int b=2;
    int p=power(a,b);
    printf("%d",p);
}


#include <stdio.h>
#include <math.h>
int power(int* x,int* y){
    return pow(*x,*y);
}
void main(){
    int a=3;
    int b=2;
    int* n=&a;
    int* n1=&b;
    
   
    int p=power(n,n1);
    printf("%d",p);
}
