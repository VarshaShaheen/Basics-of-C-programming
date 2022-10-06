#include <stdio.h>
enum days{
    monday,tuesday,wednesday=4,thursday,friday,saturday=8,sunday
};

int main(){
    enum days day;
    day=monday;
    printf("%d",day);
    return(0);
}