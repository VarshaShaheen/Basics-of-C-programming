//structure to display details of a number of students with total marks

#include <stdio.h>

struct student{
    int roll_no,tm,m1,m2,m3;
    char name[30];
}s[100];

int main(){
    int n,i;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    printf("Enter the roll no, name, and mark of %d students in the order English,Maths,Physics:\n",n);
    for(i=0;i<n;i++){
        scanf("%d %s %d %d %d",&s[i].roll_no,s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].tm=s[i].m1+s[i].m2+s[i].m3;
    }
    for(i=0;i<n;i++){
        printf("roll_no:%d\nname: %s\nTotal marks %d \n",s[i].roll_no,s[i].name,s[i].tm);
    }

}