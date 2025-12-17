#include <stdio.h>
int main(){
    int m,p,q,n,i,j,k,x,y;
    scanf("%d%d",&m,&p);
    scanf("%d%d",&q,&n);
    if(p!=q){ printf("Incompatible\n"); return 0; }
    int A[m][p],B[q][n],C[m][n];
    for(i=0;i<m;i++) for(j=0;j<p;j++) scanf("%d",&A[i][j]);
    for(i=0;i<q;i++) for(j=0;j<n;j++) scanf("%d",&B[i][j]);
    for(i=0;i<m;i++) for(j=0;j<n;j++){
        C[i][j]=0;
        for(k=0;k<p;k++) C[i][j]+=A[i][k]*B[k][j];
    }
    for(i=0;i<m;i++){ for(j=0;j<p;j++) printf("%d ",A[i][j]); printf("\n"); }
    for(i=0;i<q;i++){ for(j=0;j<n;j++) printf("%d ",B[i][j]); printf("\n"); }
    for(i=0;i<m;i++){ for(j=0;j<n;j++) printf("%d ",C[i][j]); printf("\n"); }
    scanf("%d%d",&x,&y);
    if(x>=1 && x<=m && y>=1 && y<=n)
      printf("%d\n",C[x-1][y-1]);
    else
      printf("Invalid index\n");
    return 0;
}
