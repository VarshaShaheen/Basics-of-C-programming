//number of odd and even numbers using pointer

#include <stdio.h>

int main(){
    int n,arr[100],*p,i,even=0,odd=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    p=arr;
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
        if(*(p+i)%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("no of even numbers are: %d",even);
    printf("\nno of odd numbers are: %d",odd);

}