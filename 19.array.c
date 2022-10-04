//count the number of odd and even numbers in a list

#include <stdio.h>

void input(int arr[100],int n){
    int i;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

int main(){
    int n,i,j,arr[100],even=0,odd=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    input(arr,n);
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The number of even numbers are: %d\n",even);
    printf("The number of odd numbers are %d",odd);
}