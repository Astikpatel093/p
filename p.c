#include <stdio.h>
void powe(int a , int b){
  for(int i=0;i<b;i++){
    int c=a*b;
  }
  return c;
}
void main(){
    int power;
    int *compute=&power;
int result = (*compute)(4,6);
printf("%d",result);
}