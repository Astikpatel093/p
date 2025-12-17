#include <stdio.h>
void main(){
    int m;
    printf("Enter the no of row matrix\n");
    scanf("%d",&m);
    int n;
    printf("Enter the no of column matrix\n");
    scanf("%d",&n);
    int arr[m][n];
    printf("\nEnter element of matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
     while(count<tne){
        for(int j=minc;j<=maxc;j++){
            printf("%d ",arr[minr][j]);
count++;
        }
        minr++;
    for(int i=minr;i<=maxr;i++){
        printf("%d ",arr[i][maxc]);
count++;
    }
    maxc--;
    for(int j=maxc;j>=minc;j--){
        printf("%d ",arr[maxr][j]);
        count++;
    }
    maxr--;
    for(int i=maxr;i>=minr;i--){
        printf("%d ",arr[i][minc]);
        count++;
    }
    minc++;
     }
     
    

}
