// #include <stdio.h>
// int natural(int a[],int n){
//         int sum=0,i;
//         for(int i=0;i<n;i++)
//         sum+=a[i];
//         return sum;
//     }
// void main(){
//     int n;
//     printf("Enter the no\n");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
        
//     }
//     int result=natural(a,n);
// printf("%d",result);
    
// }



#include <stdio.h>
int natural(int n){
        int sum=0;
        sum = (n*(n+1))/2;
        return sum;
    }
void main(){
    int n;
    printf("Enter the no\n");
    scanf("%d",&n);
    
    int result=natural(n);
printf("%d",result);
    
}