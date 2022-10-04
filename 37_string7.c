//to concatenate two strings without using library functions

#include <stdio.h>

int main(){
    char a[100],b[100];
    int i=0,n=0,m=0,j=0,k;
    printf("Enter the string a\n");
    gets(a);
    printf("Enter the string b\n");
    gets(b);

    while(a[i]){
        n++;
        i++;
    }
    while(b[j]){
        m++;
        j++;
    }
    for(k=n;k<n+m;k++){
        a[k]=b[k-n];
    }

    puts(a);
}