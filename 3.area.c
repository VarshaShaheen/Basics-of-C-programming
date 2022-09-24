#include <stdio.h>
#include<math.h>

int main(){
    int choice,h,b,s,area,a,c;
    printf("Enter the choice:\n Rectangle-->1 \n Triangle-->2 \n Square-->3 \n");
    scanf("%d",&choice);

    switch(choice){

        case 1:
            printf("Enter the length and breadth:\n");
            scanf("%d %d",&b,&h);
            area=b*h;
            break;

        case 2:
            printf("Enter the three sides: \n");
            scanf("%d %d %d",&a,&b,&c);
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            break;

        case 3:
            printf("Enter the sides: \n");
            scanf("%d",&s);
            area=s*s;
            break;
    }
    printf("Area of the chosen figure is: %d",area);
}