//length of string without using library functions

#include <stdio.h>

int main(){
    char a[100],c[100],ch;
    int i=0,count=0;
    printf("enter the string\n");
    gets(a);

    while(a[i]){
        count++;
        i++;
    }
    printf("%d",count);
}