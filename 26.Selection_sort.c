//Selection sort

#include <stdio.h>

void input(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n){
    int j;
    for(j=0;j<n;j++){
        printf("%4d",arr[j]);
    }
}

int main(){
    int i,j,arr[100],n,min_index,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    input(arr,n);

    for(i=0;i<n-1;i++){
        min_index=i;

        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
    print(arr,n);
}