/*to print
 *    if n=3
 *    1
 *    23
 *    456 */

#include <stdio.h>

int main(){
    int n,i,j,count=1;
   printf("Enter the number of rows:\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       for(j=0;j<i;j++){
           printf("%d",count);
           count++;
       }
       printf("\n");
   }
}