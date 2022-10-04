//to sort student details and make a rank list

#include <stdio.h>

struct student{
    int roll_no,tm;
    char name[30];
}s[100],temp;

int main(){
    int n,i,j;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    printf("Enter the roll no, name, and mark of %d students:\n",n);
    for(i=0;i<n;i++){
        scanf("%d %s %d",&s[i].roll_no,&s[i].name,&s[i].tm);
    }
    for(i=0;i<n-1;i++) {
        for (j = 0;j<n-i-1;j++) {
            if (s[j].tm > s[j + 1].tm) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    for(i=n-1;i>=0;i--){
        printf("roll_no:%d\nname: %s\nTotal marks %d \n",s[i].roll_no,s[i].name,s[i].tm);
    }

}