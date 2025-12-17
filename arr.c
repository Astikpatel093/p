#include <stdio.h>
void main(){
    int n,n1,i;
    int sum[i];
    printf("Enter the number");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
sum[i]=arr[i]+arr1[i];
    }
for(int i=0;i<n;i++){
    printf("%d ",sum[i]);
}
}