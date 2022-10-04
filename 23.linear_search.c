//find no of occurrences of a number

#include <stdio.h>

void input(int arr[100],int n){
    int i;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void print(int arr[100],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

int main(){
    int n,arr[100],i,f,count=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    input(arr,n);
    printf("Enter the number to find occurrence of:\n");
    scanf("%d",&f);

    for(i=0;i<n;i++){
        if(arr[i]==f){
            count++;
        }
    }
    printf("The number of occurrence of %d is %d",f,count);
}