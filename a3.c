// #include <stdio.h>
// void main(){
//     int n,i;
//     printf("Enter the number");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int fre[n];
// for(int i=0;i<n;i++){
//     scanf("%d",&fre[i]);

// }

// if(arr[i]==fre[i]){
// printf("the frequency is %d",fre[i]);
// }
// else {
//     printf("NO match");
// }
// }


#include <stdio.h>
void main(){
int n,i,x,count=0;
printf("Enter the size: ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
 scanf("%d",&a[i]);
}
printf("Enter number to check: ");
scanf("%d",&x);
for(i=0;i<n;i++){ 
if(a[i]==x) 
count++;
}
printf("Frequency of %d = %d",x,count);

}
