//to sort names in alphabetical order

#include <stdio.h>
#include <string.h>

int main(){
    char a[100][100],temp[100];
    int i,n,j,k;
    printf("Enter the number of elements\n");

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    for(j=0;j<n-1;j++){
        for(k=0;k<n-j-1;k++){
            if(strcmp(a[j],a[j+1])>0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",a[i]);
    }
}