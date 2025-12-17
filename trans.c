#include <stdio.h>
void main(){
    int n;
    printf("Enter thr no\n");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=n-1;
    
    for(int j=minc;j<maxc;j++){
        printf("%d ",a[minr][j]);
    }
    minr++;
    for(int i=minr;i<=maxr;i++){
        printf("%d ",a[i][minc]);

    }
    minc++;
    for(int j=minc;j<maxc;j++){
    printf("%d ",a[minr][j]);
    }
    minr--;
    for(int j=minc+1;j<=maxc;j++){
        printf("%d ",a[minr][maxc]);

    }
    minr++;
    for(int i=minr;i<maxr;i++){
     printf("%d ",a[i][maxc]); 
}
    
    minr++;
    for(int j=minc;j<=maxc;j++){

    
printf("%d ",a[maxr][j]);
    }

}