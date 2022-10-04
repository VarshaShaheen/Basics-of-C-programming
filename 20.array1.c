//sum and average of n elements

#include <stdio.h>

void input(int arr[100],int n){
    int i;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

int main(){
    int n,i,j,sum=0,arr[100];
    float avg;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    input(arr,n);
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    printf("The sum is %d\n",sum);
    printf("The average is %f",avg);
}