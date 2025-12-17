#include <stdio.h>
void main(){
    int i,j,k;
int m,n;
printf("Enter the m ");
scanf("%d",&m);
printf("Enter the n ");
scanf("%d",&n);
int arr[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
int minr=0;
int minc=0;
int maxc=n-1;
int maxr=m-1;
int count;


for(int i=minr;i<maxr;i++){
    printf("%d ",arr[i][minc]);
}
minc++;
for(int j=minc;j<maxc;j++){
    printf("%d ",arr[minr][j]);
}
minr++;
for(int i=minr;i<maxr-1;i++){
    printf("%d ",arr[i][minc]);

}
minc--;
minr++;
for(int i=minr;i<maxr;i++){
    printf("%d ",arr[i][minc]);

}
minc++;
printf("%d ",arr[minr][minc]);
minr--;
minc++;
printf("%d ",arr[minr][minc]);
minc++;
minr--;
for(int i=minr;i<maxr-1;i++){
printf("%d ",arr[i][minc]);
}
maxr--;
minc--;
printf("%d ",arr[maxr][minc]);
maxr++;
minc--;
for(int j=minc;j<maxc;j++){
printf("%d ",arr[maxr][j]);
}
for(int i=minr+2;i<=maxr;i++){
    printf("%d ",arr[i][maxc]);
}

printf("\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}




}
