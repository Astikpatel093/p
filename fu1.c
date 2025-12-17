// #include <stdio.h>
// void fact(int* f){
//         int n;
//        int* fac=1;
//        f =*fac**f;
//        return;
//     }
// void main(){
//     int n,i,fact;
//     printf("Enter the number");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",arr[i]);

//     }
//     int l=arr[i];
//     fact*(l);
//     printf("%d ",l)
// }
    
    // write a program that initialoze an array of and which accepts third and fourth value of that array compute there submission and replace the last value of the array by the computed sum. 

//     #include <stdio.h>
    
//     int sum;
//     int fun(int a, int b){
// sum=a+b;
// return sum;
//     }
//     void main(){
//         int n;
//         printf("Enter the number");
//         scanf("%d",&n);
//         int arr[n];
//         for(int i=0;i<n;i++){
//             scanf("%d",&arr[n]);
//         }

//          fun(arr[3],arr[4]);
//   int temp=sum;
//   sum=arr[n-1];
//   arr[n-1]=sum;
//   for(int i=0;i<n;i++)
//   printf("%d",arr[i]);
//     }





 #include <stdio.h>
    
    int sum;
    int fun(int s){
        
    s=sum;
return s;
    }
    void main(){
        int n,s;
        printf("Enter the number");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[n]);
        }
        for(int i=0;i<n;i++){      
sum+=arr[i];
        }

         fun(sum);
  int temp=s;
  s=arr[n-1];
  arr[n-1]=s;
  for(int i=0;i<n;i++)
  printf("%d",arr[i]);
    }