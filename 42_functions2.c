//function to find fibonacci series

#include <stdio.h>

int fibonacci(int n){
    if(n==0 | n==1){
        return(1);
    }
    else{
        return(fibonacci(n-1)+ fibonacci(n-2));
    }
}

int main(){
    int n,i;
    printf("Enter the range:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%3d",fibonacci(i));
    }
}