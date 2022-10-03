//prime numbers of a range

#include <stdio.h>
#include <math.h>

int main(){
    int l,u,i,j,count;
    printf("Enter the range:\n");
    scanf("%d %d",&l,&u);
    for(i=l;i<=u;i++){
        count=0;
        if(i==1){
            count++;
        }
        for(j=2;j<=(sqrt(i));j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            printf("%d \n",i);
        }
    }
}