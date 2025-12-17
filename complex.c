#include <stdio.h>
int sum(int x , int y){
printf("%d + %di",x,y);
}
void main(){
    typedef struct num{
        int real;
        int imaginary;
    }num;

    num n1,n2;
    n1.real=4;
    n1.imaginary=5;

    n2.real=5;
    n2.imaginary=6;
sum (n1.real+n2.real,n1.imaginary+n2.imaginary);

}