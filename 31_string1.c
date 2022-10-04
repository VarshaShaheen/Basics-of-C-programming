//occurance of a character

#include <stdio.h>

int main(){
    char a[100],f;
    int i=0,count=0;
    printf("enter the string\n");
    gets(a);
    printf("Enter the character\n");
    scanf("%ch",&f);
    while(a[i]){
        if(a[i]==f){
            count++;
        }
        i++;
    }
    if(count==0){
        printf("character not found");
    }
    else{
        printf("character found %d times",count);
    }
}