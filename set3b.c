// #include <stdio.h>
// int tri[30];
//     int n, k = 0;
// int tr(int x){
//     for (int i = 0; i < 30; i++)
//     {
//         if (tri[i] == x)
//         {
//             k = 1;
//             break;
//         }
//     }
//     return k;

// }

// void main()
// {
    

//     for (int i = 1; i <= 30; i++)
//     {
//         tri[i - 1] = i * (i + 1) / 2;
//     }
//     printf("Enter a number\n");
//     scanf("%d", &n);
//      tr(n);
//     if (k == 1)
//     {
//         printf("%d is a triangular number\n", n);
//     }
//     else
//     {
//         printf("%d is not a triangular number\n", n);
//     }
// }


#include <stdio.h>
int tri(int n){
    int sum=0,i=1;
    while(sum<n){
     sum+=i;
     i++;
    }
    if(sum==n){
        return 1;
    }
    else {
    return 0;
    }
}
void main(){
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);

    if(tri(num)==1){
        printf("it is triangular number");
    }
    else {
     printf("it is not triangular number");
    }


    
}