#include <stdio.h>
void main(){
    int n;
    int positive=0;
    int negative=0;
    int zero=0;
    int even=0,odd=0;
    printf("Enter the no\n");
    scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
 scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
 if(arr[i]>0){
positive++;
 }
 else if(arr[i]<0){
    negative++;
 }
 else if(arr[i]==0){
    zero++;
 }
if(arr[i]%2==0) {
even++;
}
else {
odd++;
}
}
printf("Positive=%d Negative=%d Even=%d Odd=%d",positive,negative,even,odd);
}


