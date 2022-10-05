//Read and display 2-d array using pointers

#include <stdio.h>

int main(){
    int arr[100][100],(*p)[100],i,j,r,c;
    p=arr;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",p[i]+j);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%2d",*(p[i]+j));
        }
        printf("\n");
    }
}