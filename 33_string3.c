//change the case of alphabets and store it into new character array

#include <stdio.h>
#include <ctype.h>

int main(){
    char a[100],c[100],ch;
    int i=0;
    printf("enter the string\n");
    gets(a);

    while(a[i]){
        ch=a[i];
        if(isupper(ch)){
            c[i]=tolower(ch);
        }
        else{
            c[i]=toupper(ch);
        }
        i++;
    }
    puts(c);
}