#include <stdio.h>

int main() {
    int a,i,sum=0,flag,rem;
    printf("Enter the number: \n");
    scanf("%d",&a);
    flag=a;
    while(a){
        rem=a%10;
        sum+=rem;
        a/=10;
    }
    printf("The sum of digits in %d is %d",flag,sum);
}