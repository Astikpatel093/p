// #include<stdio.h>
// int factorial(int n){
//     if(n==1 || n==0){
//     return 1;
//     }
//     return n*factorial(n-1);
// }
// void main(){
//     int n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     int fact = factorial(n);
//     printf("%d",fact);
// }


// #include <stdio.h>
// int factrecursive(int n){
// if(n==0)
// return 1;
// else
// return n*factorialrecursive(n-1);
// }
// int fact_non_recursive(int n){
// int fact =1;
// for(int i=1;i<=n;i++){
// fact=fact*i;
// }
// return fact;
// }
// int binomialcoefficient(int n,int r){
// int num=reursive(n);
// int den = factrecursive(r)*factrecursive(n-r);
// return (num/den);
// }
// int main(){
//     int n,r,c,result;
//     printf("Enter the factorial");
//     scanf("%d",&n);
//     printf("Enter the choice q.recursive\n 2.non-recursive\n");
//     scanf("%d",&c);
//     if(c==1)
//         result=reursion(n);
//     else
//     result=fact_non_recursion(n);
// printf("factorial of %d = %d\n",n,result);
// printf("Binomial coefficient calculation\n");
// printf("%d %d",&n,&r);

// int ncr=binomialcoefficient(n,r);
// printf("%d",ncr);

//     }

    

#include <stdio.h>
int re(int n){
if(n<=1) 
return 1;
return n * re(n-1);
}
int nonre(int n){
int f = 1;
for(int i=1;i<=n;i++) {
f*=i;
return f;
}
}
void main(){
int n,r;
printf("Enter n and r: ");
scanf("%d %d",&n,&r);
int fr = re(n);
int frr = re(r);
int frnr = re(n-r);
int ncr = fr/(frr*frnr);
printf("nCr = %d", ncr);

}



