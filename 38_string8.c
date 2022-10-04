//string manipulation functions

#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    int l,choice;
    printf("Enter the string a\n");
    gets(a);
    printf("Choose the operation:\n1-->String length\n2-->String concatenate\n3-->String copy\n4-->String compare\n0-->exit\n");
    scanf("%d",&choice);
    do{
        switch(choice) {
            case 1:
                l = strlen(a);
                printf("Length of string is %d", l);
                break;

            case 2:
                printf("Enter string b:\n");
                scanf("%s",&b);
                strcat(a, b);
                puts(a);
                break;

            case 3:
                printf("Enter string b:\n");
                scanf("%s",&b);
                strcpy(a, b);
                printf("The string a is");
                puts(a);
                break;

            case 4:
                printf("Enter string b:\n");
                scanf("%s",&b);
                if (strcmp(a, b) == 0) {
                    printf("Strings are equal");
                } else {
                    printf("Strings are not equal");
                }
        }
        printf("\nChoose the operation:\n1-->String length\n2-->String concatenate\n3-->String copy\n4-->String compare\n0-->exit\n");
        scanf("%d",&choice);

    }while(choice);

}