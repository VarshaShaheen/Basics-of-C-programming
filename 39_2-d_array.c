//to input and print 2-D character array

#include <stdio.h>

int main(){
    char a[100][100];
    int i,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++){
        printf("%s\n",a[i]);

    }
}