// #include <stdio.h>
// int n,product=0;
// int vectors(int a[],int b[]){
// for(int i=0;i<n;i++){
//  product+=a[i]*b[i];
//     }
//     return product;
// }
// void main(){
    
//     int i,j;
//     printf("Enter the no\n");
//     scanf("%d",&n);
//     int a[n];
//     int b[n];
//     for(int i=0;i<n;i++){
//      scanf("%d",&a[i]);

//     }
//     for(int j=0;j<n;j++){
//         scanf("%d",&b[j]);
//     }
//     int k=vectors(a,b);
//     printf("%d",k);
    
    

// }
#include <stdio.h>
int n,k=0;
int cross(int a[],int b[],int result[]){
    
    result[0]=a[1]*b[2]- a[2]*b[1];
    result[1]=a[2]*b[0]-a[0]*b[2];
    result[2]=a[0]*b[1]-a[1]*b[0];

}
void main(){
    
    int i,j;

   
    int a[3];
    int b[3];
    int c[3];
    for(int i=0;i<3;i++){
     scanf("%d",&a[i]);

    }
    for(int j=0;j<3;j++){
        scanf("%d",&b[j]);
   }
   cross(a,b,c);

printf("%d %d %d",c[0],c[1],c[2]);
}