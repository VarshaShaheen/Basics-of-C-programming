//frequency of a character in a string

#include <stdio.h>

int main(){
    char a[100],f;
    int i,count=0;
    printf("enter the string\n");
    gets(a);
    printf("Enter the character\n");
    scanf("%ch",&f);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==f){
            count++;
        }
    }
    if(count==0){
        printf("character not found");
    }
    else{
        printf("character found %d times",count);
    }
}