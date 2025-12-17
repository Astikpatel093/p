#include <stdio.h>
int G;
int GCD(int n1 , int n2){
for(int i=1;i<n1,n2;i++){
   
    G=n2;
    n2=n1%n2;         
    n1=G;
    
}
return n1;
}
void main(){
    int n1,n2;
    printf("Enter the number1\t");
    scanf("%d",&n1);
    printf("Enter the number2\t");
    scanf("%d",&n2);
    
    int G = GCD(n1,n2);
    
    printf("%d\n",G);
}


// #include <stdio.h>
// int gcd(int a, int b){
// if(b==0) return a;
// return gcd(b, a%b);
// }
// int main(){
// int a,b;
// printf("Enter two numbers: ");
// scanf("%d %d",&a,&b);
// printf("GCD = %d", gcd(a,b));
// return 0;
// }
