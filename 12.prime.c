//check whether a number is prime or not

#include <stdio.h>
#include <math.h>

int main(){
    int n,i,count=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        printf("The number is prime");
    }
    else {
        printf("The number is not prime");
    }
}