#include <stdio.h>
void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
while(i<j){
int temp = arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}
return;
}
void main(){
    int n,i;
    printf("Enter the numbers\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
    }
    
reverse(arr,n);

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}