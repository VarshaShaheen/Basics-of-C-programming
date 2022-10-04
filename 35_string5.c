//copy one string to another string without using library functions

#include <stdio.h>

int main(){
    char a[100],b[100];
    int i=0;
    printf("enter the string\n");
    gets(a);

    while(a[i]){
        b[i]=a[i];
        i++;
    }
    puts(b);
}