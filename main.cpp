#include <stdio.h>

int main() {
   int a,i,fact=1,flag;
   printf("Enter the number: \n");
   scanf("%d",&a);
   flag=a;
   while(a){
     fact*=a;
     a--;
   }
   printf("The factorial of %d is %d",flag,fact);
}