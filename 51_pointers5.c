//add contents of two list and store it in another list

#include <stdio.h>

int main(){
    int n,a[100],b[100],sum[100],*pa,*pb,*psum,i,x,flag,count;
    printf("Enter the number of elements in list:");
    scanf("%d",&n);
    pa=a;
    pb=b;
    psum=sum;
    for(i=0;i<n;i++){
        scanf("%d",(pa+i));
    }
    for(i=0;i<n;i++){
        scanf("%d",(pb+i));
    }
    for(i=0;i<n;i++){
        *(psum+i)=*(pa+i)+*(pb+i);
        printf("%2d",*(psum+i));
    }


}