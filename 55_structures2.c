#include <stdio.h>

struct employee{
    char name[30];
    int salary;
};
int main(){
    struct employee a[100],*p;
    int n,i;
    p=a;
    printf("Enter the no of employees");
    scanf("%d",&n);
    printf("Enter name, and salary of employees");
    for(i=0;i<n;i++){
        scanf(" %s %d",(p+i)->name,&(p+i)->salary);
    }
    for(i=0;i<n;i++){
        printf(" %s %d",(p+i)->name,(p+i)->salary);
    }

}