//main diagonal elements

#include <stdio.h>


int main(){
    int arr[100][100],r,c,i,j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                printf("%d",arr[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


}