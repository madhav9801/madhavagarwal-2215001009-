//C program to check sparse matrix//
#include <stdio.h>
void main(){
    int m,n,i,j;
    printf("Enter the size of row = ");
    scanf("%d",&m);
    printf("Enter the size of column = ");
    scanf("%d",&n);
    int a[m][n],c;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the value of sparse matrix");
            scanf("%d",&a[i][j]);
            if(a[i][j]==0){
                c++;
            }
        }
    }
    if(c>(m*n)/2){
        printf("The matrix is sparse matrix");
    }
    else{
        printf("Not a sparse matrix");
    }
}
