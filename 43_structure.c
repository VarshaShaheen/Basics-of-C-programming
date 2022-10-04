//structure to display details of a student

#include <stdio.h>

struct student{
    int roll_no;
    char name[30];
    int mark;
}S1;

int main(){
    printf("Enter the roll no, name, and mark of the student:\n");
    scanf("%d %s %d",&S1.roll_no,&S1.name,&S1.mark);
    printf(" Roll no: %d \n Name: %s \n Mark:%d",S1.roll_no,S1.name,S1.mark);
}