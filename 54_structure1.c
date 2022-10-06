//read and display structure-student details using pointer

#include <stdio.h>

struct student{
    int roll_no;
    char name[30];
    int marks;
};

int main(){
    struct student *p,a;
    p=&a;
    printf("Enter the roll no, name, and mark of student");
    scanf("%d %s %d",&((*p).roll_no),((*p).name),&((*p).marks));
    printf("roll no: %d\nname: %s\nmarks: %d",(*p).roll_no,(*p).name,(*p).marks);
}