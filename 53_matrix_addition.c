//matrix addition using pointers

#include <stdio.h>

int main(){
    int a[100][100],b[100][100],sum[100][100],(*pa)[100],(*pb)[100],(*psum)[100],i,j,r,c;
    pa=a;
    pb=b;
    psum=sum;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    printf("Enter matrix a:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",pa[i]+j);
        }
    }
    printf("Enter matrix b:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",pb[i]+j);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++) {
            *(psum[i]+j)=*(pa[i]+j)+*(pb[i]+j);
            printf("%2d",*(*(psum+i)+j));
        }
        printf("\n");
    }
}