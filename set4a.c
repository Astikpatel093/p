// #include<stdio.h>

// void main(){
//     int n1,n2,i,j;
//     printf("Enter the no1\n");
//     scanf("%d",&n1);
//     printf("Enter the no2\n");
//     scanf("%d",&n2);
//     int a[n1];
//     for(int i=0;i<n1;i++){
//         scanf("%d",&a[i]);
//     }
//     int b[n2];
//     for(int j=0;j<n2;j++){
//         scanf("%d",&b[j]);
//     }
//     for(int i=0;i<n1&&i<n2;i++){
//     int temp=a[i];
// a[i]=b[i];
// b[i]=temp;
//     }
// for(int i=0;i<n1;i++){
//     printf("%d ",a[i]);
// }
// printf("\n");
// for(int j=0;j<n2;j++){
//     printf("%d ",b[j]);
// }
// }

#include<stdio.h>

void main(){
    int n1,n2,i,j;
    printf("Enter the no1\n");
    scanf("%d",&n1);
    printf("Enter the no2\n");
    scanf("%d",&n2);
    int a[n1];
    int b[n2];
    int* p=a;
    int* q=b;
   for(int i=0;i<n1;i++){
    scanf("%d",(p+i));
   }
   for(int j=0;j<n2;j++){
    scanf("%d",(q+j));
   }
   int temp=*(p+i);
   *(p+i)=*(q+i);
   *(q+i)=temp;

   for(int i=0;i<n1;i++){
    printf("%d",*(p+i));
   }
   
   for(int j=0;j<n2;j++){
    printf("%d",*(q+j));
   }



}