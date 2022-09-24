#include <stdio.h>

int main() {
   int flag=0,n,rem;
   printf("Enter the number:\n");
   scanf("%d",&n);
   while(n){
       rem=n%10;
       flag=(flag*10)+rem;
       n/=10;
   }
   printf("\n%d",flag);
}