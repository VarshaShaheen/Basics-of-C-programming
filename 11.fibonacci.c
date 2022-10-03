//fibonacci series

#include <stdio.h>

int main(){
    int n,i,fibonacci,temp=1,flag;
    printf("Enter the range");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==0|i==1){
            fibonacci=1;
        }
        else{
            flag=temp;
            temp=fibonacci;
            fibonacci=flag+temp;
        }
        printf("%d",fibonacci);
    }
    return (0);
}