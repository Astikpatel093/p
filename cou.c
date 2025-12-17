#include <stdio.h>
int positive(int n){
    int count=0;
    if(n%10==0){
        count++;
        return positive;
    }
    else {
   return count;
    }

}
void main(){
    int n;
    
    printf("Enter the no\n");
    scanf("%d",&n);
   int p = positive(n);
printf("%d ",p);
}