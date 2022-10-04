//to check whether two strings are identical or not

#include <stdio.h>

int main(){
    char a[100],b[100];
    int i=0,count=0;
    printf("Enter the string a\n");
    gets(a);
    printf("Enter the string b\n");
    gets(b);

    while(a[i] || b[i]){
        if(b[i]!=a[i]){
            count++;
        }
        i++;
    }
    if(count==0){
        printf("The strings are identical");
    }
    else{
        printf("strings are not identical");
    }
}