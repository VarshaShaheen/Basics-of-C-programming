//largest among n numbers

#include <stdio.h>

int main(){
    int n,x,large;
    printf("Enter the number of numbers\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    large=0;
    while(n){
        scanf("%d",&x);
        if(x>large){
            large=x;
        }
        n--;
    }
    printf("%d is the largest",large);
    return (0);
}