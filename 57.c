//switch statement to print vowels in a string

#include <stdio.h>

int main(){
    char a[100],ch;
    int i=0;
    printf("Enter the string");
    gets(a);
    while(a[i]){
        ch=a[i];
        switch(ch){
            case 'a':
                printf("a");
                break;
            case 'e':
                printf("e");
                break;
            case 'i':
                printf("i");
                break;
            case 'o':
                printf("o");
                break;
            case 'u':
                printf("u");
                break;
        }
        i++;
    }
}