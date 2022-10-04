//insert an element in a desired location

#include <stdio.h>

int main(){
    int n,arr[]={1,3,4,5},f,l,i,j;
    printf("Enter the element to insert and location:\n");
    scanf("%d %d",&f,&l);
    l=l-1;
    for(i=3;i>=l;i--){
        arr[i+1]=arr[i];
    }
    arr[l]=f;

    printf("Array after insertion is:\n");
    for(j=0;j<=4;j++){
        printf("%d",arr[j]);
    }
}