//Read and display array using pointers

#include <stdio.h>

int main(){
    int n,arr[100],*p,i;
    printf("Enter the number of elements:\t");
    scanf("%d",&n);
    printf("\nEnter the elements:\t ");
    p=arr;
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++){
        printf("%d",*(p+i));
    }
}