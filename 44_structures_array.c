//structure to display details of a number of students

#include <stdio.h>

struct student{
    int roll_no;
    char name[30];
    int mark;
}s[100];

int main(){
    int n,i;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    printf("Enter the roll no, name, and mark of %d students:\n",n);
    for(i=0;i<n;i++){
        scanf("%d %s %d",&s[i].roll_no,&s[i].name,&s[i].mark);
    }
    for(i=0;i<n;i++){
        printf("%d %s %d \n",s[i].roll_no,s[i].name,s[i].mark);
    }

}