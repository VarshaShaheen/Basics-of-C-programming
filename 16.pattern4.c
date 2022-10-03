/*to print
 *    if n=3
 *      *
 *     **
 *    *** */

#include <stdio.h>

int main(){
    int n,i,j,k,count=1;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=0;k<n-i;k++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}