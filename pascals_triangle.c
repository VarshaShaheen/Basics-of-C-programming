/*to print pascals triangle
 * for n=3
 *    1
 *  1 2 1
 * 1 3 3 1 */

#include <stdio.h>

int factorial(int a){
    if(a==1 || a==0){
        return(1);
    }
    else{
        return(a*(factorial(a-1)));
    }
}

int ncr(int n,int r){
    return(factorial(n)/(factorial(n-r)*factorial(r)));
}

int main(){
    int row,i,j,k;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(j=0;j<row-i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){

            printf("%2d",ncr(i,j));
        }
        printf("\n");
    }
}