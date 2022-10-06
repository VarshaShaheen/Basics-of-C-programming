//pascals triangle
#include <stdio.h>

int fact(int a){
    if(a==0 || a==1){
        return(1);
    }
    else {
        return (a * fact(a - 1));
    }
}

int ncr(int n,int r){
    return(fact(n)/(fact(n-r)*fact(r)));
}

int main(){
    int i,r,j;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    for(i=0;i<r;i++){
        for(j=0;j<r-i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%2d",ncr(i,j));
        }
        printf("\n");
    }
}

