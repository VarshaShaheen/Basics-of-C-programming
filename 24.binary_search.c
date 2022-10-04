//binary search

#include <stdio.h>

void input(int arr[100],int n){
    int i;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void sort(int arr[100],int n){
    int i,temp,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void print(int arr[100],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%4d",arr[i]);
    }
}

int main(){
    int n,arr[100],f,start,end,middle,flag;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    input(arr,n);
    sort(arr,n);
    printf("Enter the element to search:\n");
    scanf("%d",&f);
    printf("The sorted array is:");
    print(arr,n);

    start=0;
    end=n-1;
    while(start<=end){
        middle=(start+end)/2;

        if(f==arr[middle]){
            flag=(middle+1);
            break;
        }
        else if(f>arr[middle]){
            start=middle+1;
        }
        else{
            end=middle-1;
        }

    }
    printf("\nThe number found at %d",flag);
}