//largest element in list

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
    int n,arr[100],larg=0,i;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    input(arr,n);
    for(i=0;i<n;i++){
        if(arr[i]>larg){
            larg=arr[i];
        }
    }
    printf("Largest element is: %d",larg);
}