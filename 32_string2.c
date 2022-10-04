//no of words in a string

#include <stdio.h>
#include <ctype.h>

int main(){
    char a[100],f;
    int i=0,count=1;
    printf("enter the string in which words are seperated by spaces\n");
    gets(a);

    while(a[i]){
        if(isspace(a[i])){
            count++;
        }
        i++;
    }
    printf("No of words in this string is %d",count);
}