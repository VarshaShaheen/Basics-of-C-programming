//linear search using pointers

#include <stdio.h>

int main(){
    int n,arr[100],*p,i,x,flag,count;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    p=arr;
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("\nEnter the value to search:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(*(p+i)==x){
            flag=i;
            count++;
            break;
        }
    }
    flag++;
    if(count==0){
        printf("number not found.");
    }
    else{
        printf("number found at %d",flag);
    }
}