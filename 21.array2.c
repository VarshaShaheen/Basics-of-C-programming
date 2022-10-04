//add the elements of two list and store it in a separate list

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
    int n,m,i=0,a[100],b[100],sum[100];
    printf("Enter the number of elements in array :\n");
    scanf("%d",&n);
    input(a,n);
    input(b,n);
    while(i<=n){
        sum[i]=a[i]+b[i];
        i++;
    }
    print(sum,n);
}