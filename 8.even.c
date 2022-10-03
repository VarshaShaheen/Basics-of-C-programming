#include <stdio.h>

int main() {
    int l,h,i;
    printf("Enter the lower limit and upper limit:\n");
    scanf("%d %d",&l,&h);
    for(i=l;i<=h;i++){
        if(i%2==0){
            printf("%d",i);
        }
    }
}