#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("The numbers are equal.");
    }
    else{
        printf("The numbers are not equal.");
    }
}