//to check whether a string is palindrome without using library functions
#include <stdio.h>

int main(){
    char a[100];
    int i,count=0,flag=0;
    gets(a);
    while(a[i]){
        count++;
        i++;
    }

    for(i=0;i<(count+1)/2;i++){
        if(a[i]!=a[count-i-1]){
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("String is palindrome");
    }
    else{
        printf("string is not palindrome");
    }
}