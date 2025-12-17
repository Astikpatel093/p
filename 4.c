#include<stdio.h>
int not_prime=0,i=2;
int prime(int n){

     if(n==0||n==1){
            not_prime=1;
     }
     else{
        
     while(i<n){
        if(n%i==0&&n!=2){
            not_prime=1;
            break;
        }
        i++;
           
     }
}
}
void main(){
    int n=1;
     
prime(n);
      if(not_prime){
        printf("not prime no %d",n);
      }
      else{
        printf("prime no %d",n);
      }
    
}
